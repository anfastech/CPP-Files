#include <stdio.h>

#define GREEN "\033[0;32m" // Green color
#define RED "\033[0;31m"   // Red color
#define RESET "\033[0m"    // Reset to default

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 5) {
            printf(RED ". Hello, world!\n" RESET); // Red dot for the last line
        } else {
            printf(GREEN ". Hello, world!\n" RESET); // Green dot for other lines
        }
    }
    return 0;
}