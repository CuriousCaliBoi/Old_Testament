#include <stdio.h>

int main(){
    int c;
    int ndigit[10];
    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            ndigit[c-'0']++;
            putchar(c);
        }
    }
    for (int i =0; i<10; i++){
        printf("There are %d %d's\n",ndigit[i],i);
    }
    return 0;

}