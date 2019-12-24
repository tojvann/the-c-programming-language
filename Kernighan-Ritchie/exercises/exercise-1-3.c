/*
Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
*/

#include <stdio.h>
int main(){
printf("-------------------------------------------------------------------------------------\n");
printf("\tFahrenheit-Celcius Table\n");
printf("-------------------------------------------------------------------------------------\n");

float fahr, cel;
    fahr = 0;
    while(fahr <= 300)
    {
        cel = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f \t %6.1f \n",fahr, cel);
        fahr += 20;
    }
    return 0;
}