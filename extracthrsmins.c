#include <stdio.h>

int main(){
    char value[4];
    scanf("%s",value);
    printf("Hour: %c%c\n",value[0],value[1]);
    printf("Minutes: %c%c\n",value[2],value[3]);
    return 0;
}