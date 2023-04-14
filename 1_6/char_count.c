#include stdio.h

int main(int argc, char *argv[]){
    // digits 1
    // space 2
    // tabs 3
    // newlines 4
    // letter 5

    // Going to use arrays to solve this problem!
    // initialize c,i,nwhite,nother
    int c, i,nwhite,nother;

    // initalize array to hold character count?
    int ndigit[10];

    // declare
    nwhite = nother = 0;

    // initialize array to hold all 0s
    for (i = 0;i<10; i++){
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF){
        // now we have a bunch of if then increase count
        // how do I do char comparison


    }
}