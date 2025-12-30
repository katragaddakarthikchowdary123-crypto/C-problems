#include <stdio.h>

int main() {
    int num;
    printf("Input: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 3 == 0) {
        printf("Output: Yes\n");
    } else {
        printf("Output: No\n");
    }

    return 0;
}