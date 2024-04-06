#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    FILE *fptr1 = fopen(file_from, "r");
    if (fptr1 == NULL) {
        dprintf(2, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    FILE *fptr2 = fopen(file_to, "w");
    if (fptr2 == NULL) {
        dprintf(2, "Error: Can't write to %s\n", file_to);
        exit(99);
    }

    char buffer[1024];
    size_t bytes_read;

    while ((bytes_read = fread(buffer, 1, sizeof(buffer), fptr1)) > 0) {
        size_t bytes_written = fwrite(buffer, 1, bytes_read, fptr2);
        if (bytes_written != bytes_read) {
            dprintf(2, "Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }

    if (fclose(fptr1) != 0 || fclose(fptr2) != 0) {
        dprintf(2, "Error: Can't close fd %d\n", fileno(fptr1));
        exit(100);
    }

    return 0;
}

