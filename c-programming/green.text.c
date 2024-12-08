#include <stdio.h>

// #define G "\033[0;32m"
#define Reset "\033[0m"


int main() {
    printf(Reset " ");
    for (int x = 30; x <= 47; x++)
    {
        printf(Reset "\033[0;%dm Hello (%d)\n",x,x); // Print "Hello" in green and reset color
    }

    printf(Reset " ");
    
    return 0;
}