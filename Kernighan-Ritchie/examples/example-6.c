/*
Count lines in input
*/

#include <stdio.h>
int main(){

int c, nl;
nl = 0;
while((c = getchar()) != EOF)
{
    if(c =='\n')
    ++nl;
}
printf("%d", nl);

}

// Note: in this program if we exit from the middle of a line without the new line character that line is not counted.