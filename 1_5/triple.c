#include <stdio.h>

int main(int argc, char *argv[]){
    int c;
    // int prev;
    c = getchar();
    while(c!=EOF){
        // prev = c;
        putchar(c);
        putchar(c);
        putchar(c);
        c = getchar();
    }
}