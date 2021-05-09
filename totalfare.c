#include <stdio.h>

int main(){
    int distance;
    float cost;
    scanf("%i",&distance);

    if (distance > 250){
        int temp = distance;
        temp -= 250;
        if ((temp/250) >= 1){
            cost = ((temp/250) * (2.50)) + 40;
        }
        else{
            cost = 40;
        }
    }
    else{
        cost = 40;
    }
    printf("%.2f",cost);

    return 0;
}
