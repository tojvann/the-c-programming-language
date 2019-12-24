/*
Exercise 1-2. Experiment to find out what happens when prints 's argument string contains
\c, where c is some character not listed above.
*/

#include<stdio.h>

int main(){
    printf("hello world \a");
    printf("hello world \b");
    printf("hello world \c");
    printf("hello world \d");
    printf("hello world \e");
    printf("hello world \f");
    printf("hello world \g");
    printf("hello world \h");
    printf("hello world \i");
    printf("hello world \j");
    printf("hello world \k");
    printf("hello world \l");
    printf("hello world \m");
    printf("hello world \n");
    printf("hello world \o");
    printf("hello world \p");
    printf("hello world \q");
    printf("hello world \r");
    printf("hello world \s");
    printf("hello world \t");
    printf("hello world \u");
    printf("hello world \v");
    printf("hello world \w");
    printf("hello world \x");
    printf("hello world \y");
    printf("hello world \z");
    return 0;
}

/*
terminal log:
exercise1-2.c: In function ‘int main()’:
exercise1-2.c:11:12: warning: unknown escape sequence: '\c'
   11 |     printf("hello world \c");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:12:12: warning: unknown escape sequence: '\d'
   12 |     printf("hello world \d");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:15:12: warning: unknown escape sequence: '\g'
   15 |     printf("hello world \g");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:16:12: warning: unknown escape sequence: '\h'
   16 |     printf("hello world \h");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:17:12: warning: unknown escape sequence: '\i'
   17 |     printf("hello world \i");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:18:12: warning: unknown escape sequence: '\j'
   18 |     printf("hello world \j");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:19:12: warning: unknown escape sequence: '\k'
   19 |     printf("hello world \k");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:20:12: warning: unknown escape sequence: '\l'
   20 |     printf("hello world \l");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:21:12: warning: unknown escape sequence: '\m'
   21 |     printf("hello world \m");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:23:12: warning: unknown escape sequence: '\o'
   23 |     printf("hello world \o");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:24:12: warning: unknown escape sequence: '\p'
   24 |     printf("hello world \p");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:25:12: warning: unknown escape sequence: '\q'
   25 |     printf("hello world \q");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:27:12: warning: unknown escape sequence: '\s'
   27 |     printf("hello world \s");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:29:12: error: incomplete universal character name \u
   29 |     printf("hello world \u");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:31:12: warning: unknown escape sequence: '\w'
   31 |     printf("hello world \w");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:32:12: error: \x used with no following hex digits
   32 |     printf("hello world \x");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:33:12: warning: unknown escape sequence: '\y'
   33 |     printf("hello world \y");
      |            ^~~~~~~~~~~~~~~~
exercise1-2.c:34:12: warning: unknown escape sequence: '\z'
   34 |     printf("hello world \z");
      |            ^~~~~~~~~~~~~~~~
The terminal process terminated with exit code: 1
*/