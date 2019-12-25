/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main(){

    int b = 0, t = 0, nl = 0, c;
    while((c = getchar()) != EOF){
        if(c == ' ')
            ++b;
        else if(c == '\t')
            ++t;
        else if(c == '\n')
            ++nl;   
    }
    printf("blanks = %d\n tabs = %d\n newlines = %d\n", b, t, nl);
    return 0;
}