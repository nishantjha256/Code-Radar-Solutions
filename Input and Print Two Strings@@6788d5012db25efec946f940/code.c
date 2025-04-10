#include <stdio.h>
int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);  // Reads a word (until space or newline)

    printf("Enter second string: ");
    scanf("%99s", str2);

    printf("You entered:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}