#include <stdio.h>

// Function to generate ANSI escape code for RGB color
void print_with_color(int r, int g, int b, const char *text) {
    printf("\033[38;2;%d;%d;%dm%s\033[0m\n", r, g, b, text); // RGB color escape sequence
}

int main() {
    int steps = 12; // Number of lines
    int start_r = 0, start_g = 255, start_b = 0; // Start color (green)
    int end_r = 255, end_g = 0, end_b = 0; // End color (red)

    for (int i = 0; i < steps; i++) {
        // Calculate intermediate color using linear interpolation
        int r = start_r + (end_r - start_r) * i / (steps - 1);
        int g = start_g + (end_g - start_g) * i / (steps - 1);
        int b = start_b + (end_b - start_b) * i / (steps - 1);

        // Print the line with the interpolated color
        char text[50];
        sprintf(text, ". Hello, world! (%d)", i + 1);
        print_with_color(r, g, b, text);
    }

    return 0;
}
