#include <stdio.h>
int main() {
    int type, units;
    float bill = 0;
    scanf("%d %d", &type, &units);

    switch(type) {
        case 1: 
            if(units <= 100)
                bill = units * 3;
            else
                bill = (100 * 3) + (units - 100) * 5;

            if(units > 100)   
                bill -= 80;
            break;

        case 2: 
            if(units <= 100)
                bill = units * 7;
            else
                bill = (100 * 7) + (units - 100) * 10;
            break;
    }

    printf("Bill ₹%.0f", bill);
    return 0;
}