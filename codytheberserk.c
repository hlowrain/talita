#include <stdio.h>

int main(){
    int friends,heads;
    
    scanf("%i",&friends);
    scanf("%i",&heads);

    int minimum = heads/friends;
    printf("%i",minimum);

    return 0;
}