#include <stdio.h>


int main(){
    int c;
    int prev;
    c = getchar();
    while((c != EOF)){
        prev = c;
        c = getchar();
        if ((c == ' ') && (prev == ' ')){
            ;
        } else {
            putchar(prev);
        }


// right now its just apmming the first letter
    }
    printf("%d is the value of EOF",EOF);
    return 0;

}