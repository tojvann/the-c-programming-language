/*
Write a program to print a histogram of the lengths of words in its input.
Horizontal orientation version
*/



#include <stdio.h>
int main(){
    int c, i, length, j;
    int size[10];
    length = 0;
    for(i =0; i < 10; i++){
        size[i] = 0;
    }
    while((c = getchar()) != EOF){
        if(c == ' '  || c == '\n' || c == '\t'){
            ++size [length];
            length = 0;
        }
        else
        ++length;
    }
    printf("\n");
    for (i = 0; i < 10 ; i++)
    if(size[i] != 0)
    {
        printf("%d:",i);
        for (j = 0; j < size[i] ; j++)
        printf("*");
        printf("\n");
    
    }
    return 0;
}

/*
NOTE: the last word is not counted if there is no space or tab or new line after it.
*/