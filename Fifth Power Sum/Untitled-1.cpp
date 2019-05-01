#include<algorithm>
#include<math.h>
#include<vector>
#include<cstdio>
using namespace std;

#define bound 944784

unsigned int sum(int number, int power);

int main() {
    unsigned int result = 0;
    for (int i=10;i<bound;++i) {
        if(i == (int) sum(i, 5)) {
            result += i;
        }
    }
    printf("%d\n", result);
    return 0;
}

unsigned int sum(int number, int power) {
    unsigned int result = 0;
    int digit;

    while(number > 0) {
        digit = number % 10;
        number /= 10;
        result += (unsigned int) pow(digit, power);
    }
    return result;
}