/*
Rewrite the temperature conversion program in section 1.2 to use a function for conversion
*/

#include <stdio.h>

float temp_conversion(float);
int main(){
    printf("%6.2f",temp_conversion(43.7));
    return 0;
}

float temp_conversion(float fahr){
    return (5.0/9.0) * (fahr - 32);
}