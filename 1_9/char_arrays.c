// longest line in a file ix x long and what is it?


// anything over 80 characters

// write a program to remove blanks/tabs before lines + blank lines

// write a program that revers a string s


// lets start out with a base implementation
#include <stdio.h>

int main(){
    int c,max,count;
    max = 0;
    count = 0;
    while((c = getchar())!= EOF){
        if (c == '\n'){
            if(count > max){
                max = count;
                printf("The new longest line has %d characters", max);

            }
            count = 0;

        } else{
            count ++;
        }

    }
    return 0;

}