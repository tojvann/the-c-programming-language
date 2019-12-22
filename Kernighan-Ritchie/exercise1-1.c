/*Exercise 1-1. Run the `` hello, world '' program on your system. Experiment with leaving
out parts of the program, to see what error messages you get.*/

#include <stdio.h>

main()
{
   printf("Hello world!");
}

/*
If we leave out #include<stdio.h>
    Error:
        exercise1-1.c: In function ‘int main()’:
        exercise1-1.c:7:5: error: ‘printf’ was not declared in this scope
             7 |     printf("Hello world!");
               |     ^~~~~~

*/

/*
If we leave out main()
    Error:
        exercise1-1.c:7:1: error: expected unqualified-id before ‘{’ token
         7 | {
           | ^
*/

/*
if we leave out printf("Hello world!")
    No Error
*/

/*
if we leaeve out {
    Error:
        exercise1-1.c:8:4: error: expected constructor, destructor, or type conversion before ‘printf’
                8 |    printf("Hello world!");
                |    ^~~~~~
                exercise1-1.c:9:1: error: expected declaration before ‘}’ token
                9 | }
                | ^

*/

/*
if we leaeve out {
    Error:
                exercise1-1.c: In function ‘int main()’:
                exercise1-1.c:8:26: error: expected ‘}’ at end of input
                        8 |    printf("Hello world!");
                          |                          ^
*/

/*
if we leave out ;
    Error:
        exercise1-1.c: In function ‘int main()’:
        exercise1-1.c:8:26: error: expected ‘;’ before ‘}’ token
            8 |    printf("Hello world!")
              |                          ^
              |                          ;
            9 | }
              | ~                   
*/

/*
if we leave out >
    Error:
        exercise1-1.c:4:18: error: missing terminating > character
            4 | #include <stdio.h
              |                  ^
*/