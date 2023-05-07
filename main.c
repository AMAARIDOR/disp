#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Main function
int main(int argc, char *argv[]) {
    if (argc < 3 && argc > 1) {
        // Scenario for perfect number of arguments
        printf("More than 1 argument but less than 2\n");
    } else if (argc <= 1) {
        // Error condition
        fprintf(stderr, "ERORR: Need at least 1 argument.\n");
        return 1;
    } else if (argc >= 3) {
        // Error condition
        fprintf(stderr, "ERORR: Too many arguments.\n");
        return 1;
    }

    return 0;
}