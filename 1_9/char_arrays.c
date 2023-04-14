// longest line in a file ix x long and what is it?


// anything over 80 characters

// write a program to remove blanks/tabs before lines + blank lines

// write a program that revers a string s


// lets start out with a base implementation
// now I need to integrate an actual char representation 
// get line and deal at that level of abstraction
#include <stdio.h>
#define MAXLINE 1000
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
int getline(char s[], int lim){
    // im not going to put in the newline shit because it doesnt make sense to me
    // well at least the part where I count it?
    // so getting a stream of chars
    // implement this function after gurantee that a line exists thats it
    // 
    int c, i;
    for (i =0; i < lim && (c = getchar())!=EOF && c !='\n';i++){
        // fill out our line array with the current line with whatever bounds
        // adhering to the maxlimit, end of file (last line)(our earlier eof chek will be
        // while len> 0 and we don't want to include the new line character)
        s[i] = c;
        return i;

    }
    

}