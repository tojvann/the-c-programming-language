/*
Exercise 1-11. How would you test the word count program? What kinds of input are most
likely to uncover bugs if there are any?
*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c, nl, nw, nc, state;
    nl = nw = nc = 0;
    state = OUT;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
   
    }
    printf("%d, %d, %d\n", nl, nw, nc);
    return 0;
}
/*
Use the following inputs to uncover any likely bugs
- \t
- blank space
- empty string/nothing at all
- press only enter
*/