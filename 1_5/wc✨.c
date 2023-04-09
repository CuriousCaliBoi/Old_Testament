#include <stdio.h>

#define IN 1
#define OUT 0

int char_test(int c);
int main(){
    int c;
    int words;
    int state;

    state = OUT;
    words = 0;
    while ((c = getchar()) != EOF){
        if ((char_test(c)) && !(state)){
            words+=1;
            state = IN;
        } 
        if(!(char_test(c) && state)){
            state = OUT;
        }



    }
    printf("There are %d words bruv", words);
    return 0;


}

int char_test(int c){
    if ((c == 32) || (c == 10) || (c == 9)){
        return 0;
    } else{
        return 1;
    }
}