#include <stdio.h>

int main(){
    int a,b,x,y;
    scanf("%i %i %i %i",&a,&b,&x,&y);
    int choco = b + ((a*y)/x);
    printf("%i",choco);
    return 0;
}