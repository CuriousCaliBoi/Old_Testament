#include <stdio.h>


int main(){
    int c;
    int next;
    c = getchar();
    while((c != EOF)){
        next = getchar();
        if ((c == " ") && (next == " ")){
            ;
        } else {
            putchar(c);
        }


    }
    return 0;

}