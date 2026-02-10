#include <stdio.h>
int main() {
    float data;
    scanf("%f", &data);

    if (data > 2.0){ 
        printf("Data limit exceeded");
    }
    else{
        printf(" data with in limit");
    }

    return 0;
}