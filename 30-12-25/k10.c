#include <stdio.h>

int main() {
    int number;
    printf("Input: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("Output: Yes\n");
    } else {
        printf("Output: No\n");
    }

    return 0;
}