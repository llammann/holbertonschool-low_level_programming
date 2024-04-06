#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{ 
    FILE *fptr1, *fptr2; 
    char filename[100], c; 

    printf("Enter the filename to open for reading: "); 
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    fptr1 = fopen(filename, "r"); 
    if (fptr1 == NULL) 
    { 
        fprintf(stderr, "Cannot open file %s\n", filename); 
        exit(1); 
    } 

    printf("Enter the filename to open for writing: "); 
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    
    fptr2 = fopen(filename, "w"); 
    if (fptr2 == NULL) 
    { 
        fprintf(stderr, "Cannot open file %s\n", filename); 
        exit(1); 
    } 

    while ((c = fgetc(fptr1)) != EOF) 
    { 
        fputc(c, fptr2); 
    } 

    printf("\nContents copied to %s\n", filename); 

    fclose(fptr1); 
    fclose(fptr2); 
    return 0; 
}

