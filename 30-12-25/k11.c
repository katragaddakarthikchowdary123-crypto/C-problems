#include <stdio.h>

int main() {
    int number;
    printf("Input: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
        printf("Output: Single Digit\n");
    } else {
        printf("Output: Not Single Digit\n");
    }

    return 0;
}