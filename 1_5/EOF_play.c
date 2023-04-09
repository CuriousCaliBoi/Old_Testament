#include <stdio.h>

int main(){
    // forget null right now
    int c;
    printf("The value of (c= getchar()) == EOF at this very moment is False hence %d ",(c= getchar()) == EOF);
    while((c= getchar()) != EOF){

    }
    printf("The value of EOF is %d ",putchar(c));

    return 0;


}