#include <stdio.h>

int main(){
    int c;
    int count;
    count = 0;

    while((c = getchar()) != EOF){
        count+=1;
    }
    printf("There are %d characters", count);
    return 0;
}