#include <stdio.h>

void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int decimalNumber;

    // Input: Get a decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Output: Print the number in different formats
    printf("Decimal: %d\n", decimalNumber);
    
    printf("Binary: ");
    printBinary(decimalNumber);
    printf("\n");

    printf("Octal: %o\n", decimalNumber);
    printf("Hexadecimal: %X\n", decimalNumber);

    return 0;
}