#include <stdio.h>

int main(){
    float radius,height, a = 1, b = 3, temp;
    temp = a/b;

    scanf("%f %f",&radius,&height);
    
    float volume = temp*3.14*radius*radius*height;
    printf("%.2f",volume);

    return 0;
}