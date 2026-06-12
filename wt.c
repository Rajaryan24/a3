#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    // %d displays the integer value (ASCII value) of a character
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
