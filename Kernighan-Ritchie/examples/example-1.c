/*
Temperature Calculator
*/
#include<stdio.h>

int main(){
    int fahr, cel;
    fahr = 0;
    while(fahr <= 300)
    {
        cel = 5 * (fahr - 32) / 9;
        printf("%3d \t %6d \n",fahr, cel);
        fahr += 20;
    }
    return 0;
}