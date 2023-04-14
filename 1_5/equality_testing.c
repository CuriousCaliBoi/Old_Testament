#include <stdio.h>

int main(){
    int c;
    while ((c = getchar()) != EOF){
        if (c == 'a'){
            printf("the lowercase a is in this text file");
            // immediately terminate
            return 0;
        }
    }
    return 0;

}