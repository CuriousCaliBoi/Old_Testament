// mostly  a test for data types see integer overflow error
// and how to handle that

#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    
    long m = atoi(argv[1]);
    // printf("the value of m is %d",m);
    long n = atoi(argv[2]);
    long answer = m;
    long power = n;

    if (n<0){
        printf("only positive exponents im not cool enough");
        return 1;
    }
    if (n == 0){
        printf("1");
        // should i return the value as well?
        // how would that interact with whatever maybe cat?
        return 1;
    }
    if (argc != 3){
        printf("Only two arguments please");
        return 1;
    } else{
        while (n!=1){
            answer *=m;
            n -=1;
        }
        printf("%ld to the power of %ld is %ld\n",m,power,answer);
    }
}