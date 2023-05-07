#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declaration
void fetch_file(char *filename);

// Main function
int main(int argc, char *argv[]) {
    if (argc < 3 && argc > 1) {
        // Right condition
        fetch_file(argv[1]);
        return 0;
    } else if (argc <= 1) {
        // Error condition
        fprintf(stderr, "ERROR: Need at least 1 argument.\n");

        return 1;
    } else if (argc >= 3) {
        // Error condition
        fprintf(stderr, "ERROR: Too many arguments.\n");

        return 1;
    }

    return 0;
}
 
// Read file function
void fetch_file(char *filename) {
    FILE* fp = fopen(filename, "r");
    char ch;
    do {
        ch = fgetc(fp);
        printf("%c", ch);
    } while (ch != EOF);
    printf("\n");
    fclose(fp);
}
