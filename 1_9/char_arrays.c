#include <stdio.h>
#define MAXLINE 1000

// Add function prototypes
int my_getline(char s[], int lim);
void copy(char to[], char from[]);

int main(){
    int len, max;
    max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];
    while((len = my_getline(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){
        printf("%s",longest);
        return 0;
    }
    return 1;
}

int my_getline(char s[], int lim){
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }

    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0'){
        i++;
    }
}
