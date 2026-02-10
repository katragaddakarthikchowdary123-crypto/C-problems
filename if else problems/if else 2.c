#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%5==0){
        printf("is divisible");
    }
    else{
        printf("not divisible");
    }
    
    return 0;
}