include <stdio.h>

int main() {
    char color;

    // Accept input
    printf("Enter the color of traffic (R, Y, or G): ");
    scanf("%c", &color);

    // Display output
    switch (color) {
        case 'R':
        case 'r':
            printf("STOP\n");
            break;
        case 'Y':
        case 'y':
            printf("GET READY\n");
            break;
        case 'G':
        case 'g':
            printf("MOVE\n");
            break;
        default:
            printf("Invalid color\n");
            break;
    }

    return 0;
}