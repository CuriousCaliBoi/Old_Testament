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
    int len, max;
    max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];
    // this confirms the earlier observation about walrus operator into boolean
    while((len = getline(line, MAXLINE) > 0)){
        if (len > max){
            max = len;
            copy(line, longest);
        }

    }
    if (max > 0){
        printf("%s",longest);
        return 0;
    }
    return 1;

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
        // if 0 based array shouldnt it be lim-1 if we need '\o'

        s[i] = c;

    }
    i++;
    // need null terminator always for C
    s[i] = '\0';
    return i;
    

}

void copy(char to[], char from[]){
    int i =0;
    // weird way to run through a string coming from python
    while((to[i] = from[i]) != '\0'){
        i++;
    }
    // why doesnt book put null terminator ?
    // would the last to[i] = from[i] even if the whole expression is false p awesome
}