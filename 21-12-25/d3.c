#include <stdio.h>
int main() {
    int A;
    int B;
    printf("the greater number between two integer:",A,B);
    scanf("%d %d",&A,&B);
    if(A>=B){
        printf("A is greater%d",A);
    }
    else if(B>=A) {
        printf("B is greater %d",B);
    }

    //Your Code goes here!
    
    return 0;
}