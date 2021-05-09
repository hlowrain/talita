#include <stdio.h>

int main(){
    int n;
    scanf("%i",&n);
    n += 64;
    char letter = n;
    printf("%c",letter);
    return 0;
}