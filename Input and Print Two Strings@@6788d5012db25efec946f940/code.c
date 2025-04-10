#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter two space-separated strings: ");
    if (scanf("%99s %99s", str1, str2) == 2) {
        printf("You entered: %s and %s\n", str1, str2);
    } else {
        printf("Error: Invalid input. Please enter two space-separated strings.\n");
        // Optionally, you might want to clear the input buffer here
        // using a loop with getchar() until a newline is encountered.
    }

    return 0;
}