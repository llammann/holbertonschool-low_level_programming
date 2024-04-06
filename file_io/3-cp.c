#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * Handles error by printing an error message to stderr and exiting with the given code.
 * 
 * @param msg The error message to print
 * @param code The exit code
 */
void handle_error(const char *msg, int code)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(code);
}

/**
 * Opens a file with the given filename, flags, and mode.
 * 
 * @param filename The name of the file to open
 * @param flags The flags to use when opening the file
 * @param mode The mode to use if the file is created
 * @return The file descriptor of the opened file
 */
int open_file(const char *filename, int flags, mode_t mode)
{
    int fd = open(filename, flags, mode);
    if (fd == -1)
        handle_error("Error opening file", 98);

    return (fd);
}


/**
 * Closes the file with the given file descriptor.
 */

void close_file(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

/**
 * Main function of the program. Copies the content of one file to another file.
 * 
 * @param argc The number of command-line arguments
 * @param argv An array of strings containing the command-line arguments
 * @return 0 on success, non-zero on failure
 */

int main(int argc, char *argv[])
{
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        handle_error("Usage: cp file_from file_to", 97);

    fd_from = open_file(argv[1], O_RDONLY, 0);
    fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
            handle_error("Error writing to file", 99);
    }

    if (bytes_read == -1)
        handle_error("Error reading from file", 98);

    close_file(fd_from);
    close_file(fd_to);
    
    return 0;
}

