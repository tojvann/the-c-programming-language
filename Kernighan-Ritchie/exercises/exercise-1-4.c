/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
*/
#include<stdio.h>

int main()
{
printf("-------------------------------------------------------------------------------------\n");
printf("\tCelcius-Fahrenheit Table\n");
printf("-------------------------------------------------------------------------------------\n");

float fahr, cel;
    cel = 0;
    while(cel <= 300)
    {
        fahr = cel * (9.0/5.0) + 32;
        printf("%3.0f \t %6.1f \n",cel, fahr);
        cel += 20;
    }
    return 0;
}