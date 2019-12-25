/*
Count characters in input. First Version.
*/
#include <stdio.h>

int main(){
    long nc;
    nc = 0;
    while(getchar() != EOF)
        ++nc;
        printf("%ld\n",nc);
    return 0;
}