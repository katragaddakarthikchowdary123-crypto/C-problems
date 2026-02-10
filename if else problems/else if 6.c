#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowels");

    }
    else{
        printf("consonants");
    }


    
    return 0;
}