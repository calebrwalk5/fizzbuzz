#include <stdio.h>

/*
FizzBuzz in C
Written by calebrwalk5 (aka anusO1)
*/

int main() {
    int i;
    for (i = 1; i <100; i++) {
        if (i % 3 == 0) {
            printf ("Fizz\n");
        } else if ( i % 5 == 0) {
            printf ("Buzz\n");
        } else if (i % 15 == 0) {
            printf ("FizzBuzz\n");
        } else {
            printf("%d\n",i);
        }
    } return 0;
}
