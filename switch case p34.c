#include <stdio.h>
int main() {
    int hours;
    float salary;
    scanf("%d %f", &hours, &salary);
     if(hours > 40){
        salary += (hours - 40)*200;
    }
    else{
    printf("total salary %.2f",salary);
    }
   return 0;
}
