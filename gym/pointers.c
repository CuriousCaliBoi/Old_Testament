#include <stdio.h>
int main(){
    // declared a pointer
    // so it's assigned some hexadecimal number
    int* ptr;
    int var;

    printf("my pointer value is %p\n",ptr);
    printf("my var memory address is %p\n",(void*)&ptr);
    // the $ (address of) operator returns an pointer which points to address
    // of the variable
    ptr = &var;
    *ptr = 7;
    printf("I think pointer just changed the var value to %d\n",var);
}