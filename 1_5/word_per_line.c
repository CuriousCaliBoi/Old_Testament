#include <stdio.h>

int char_test(int c);

int main(){
    int c;
    int state;
    #define IN 1
    #define OUT 0

    state = OUT;

    while((c = getchar()) != EOF){
        if(char_test(c)){
            putchar(c);
            if (!(state)){
                state = IN;
            }
        }
        if (state && !(char_test(c))){
            state = OUT;
            printf("\n");
        }

    }
    return 0;

}

int char_test(int c){
    if ((c == 32) || (c == 10) || (c == 9)){
        return 0;
    } else{
        return 1;
    }
}