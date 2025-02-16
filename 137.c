//C Program to Make a File Read-Only1
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "my_file.txt"; 
    FILE *file = fopen(filename, "r"); 
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return 1;
    }

    fclose(file);

    printf("File '%s' is now read-only.\n", filename); 

    return 0;
}