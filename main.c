#include <stdio.h>
#include <errno.h>

// Main function
int main(int argc, char *argv[]) {
    if (argc < 3 && argc > 1) {
        // Scenario for perfect number of arguments
        printf("More than 1 argument but less than 2\n");
    } 

    return 0;
}