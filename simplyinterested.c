#include <stdio.h>

int main(){
    float amount, rate;
    int yrs;
    scanf("%f",&amount);
    scanf("%f",&rate);
    scanf("%i",&yrs);

    float interest = (amount*rate*yrs) / 100;
    printf("%.2f",interest);

    return 0;
}