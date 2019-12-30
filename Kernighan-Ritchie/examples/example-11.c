/*
Writing getline function
*/

#include <stdio.h>

#define MAXLINE 1000

int getline(char [], int);
void copy(char [], char []);

int main(){
    int len, max;
    char line[MAXLINE], longest[MAXLINE];
    max = 0;
    while((len = getline(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0){
        printf("%s", longest);
    }
    return 0;
}

int getline(char line[], int lim){

    int c, i;
    for(i =0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i){
        line[i] = c; 
    }
    if(c == '\n'){
        line[i] = c;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }

}