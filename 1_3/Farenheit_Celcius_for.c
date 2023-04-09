#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


int main (){
    int fahr;
    for(fahr = LOWER;fahr <= UPPER;fahr = fahr + STEP){
        printf("%d%6.1f\n",fahr,5.0/9.0*(fahr-32));
    }
// I need to fucking create the string and then I can substite the variables outside the string for printf
// now i should define constants
}