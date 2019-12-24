/*
Verify that the expression getchar() != EOF is 0 or 1.
*/
#include <stdio.h>

int main(){
    if(getchar() != EOF)
    printf("0");
    else
    printf("1");
    
    
return 0;
}