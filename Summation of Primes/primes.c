#include <stdio.h>
#include <math.h>
#include <termios.h>
#include <unistd.h>

#define BELOW 2000000

int isaprime (int num);

int main (void) {

    int i;
    long sum = 0;

    for (i = 2; i < BELOW; i++) {

            if (isaprime(i) == 1) {
                    sum = sum + i;
                    printf ("%ld", sum);
            }
    }
    getch();
    return 0;
}

int isaprime (int num) {

    int i;
    for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                    return 0;
            }
            else {
                    ;
            }
    }

    return 1;
}