#include <stdio.h>

int main() {
    char c;
    printf("Input: ");
    scanf(" %c", &c); 

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Output: Alphabet\n");
    } else {
        printf("Output: Not Alphabet\n");
    }

    return 0;
}