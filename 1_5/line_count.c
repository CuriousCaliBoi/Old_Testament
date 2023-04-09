#include <stdio.h>

int main(){
    int c;
    int lines;
    int blanks;
    lines = 0;
    blanks = 0;
    while((c= getchar()) != EOF){
        if (c =='\n'){
            lines +=1;
        }
        if (c ==' '){
            blanks +=1;
        }
    }
    printf("There are %d lines\n",lines);
    printf("There are %d blanks",blanks);
    return 0;
}