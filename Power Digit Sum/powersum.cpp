#include<algorithm>
#include<math.h>
#include<vector>
#include<cstdio>
using namespace std;

int powersum(int number, int power) {
    long sum = 0;
    int bp = (int)pow(number, power);
    while(bp != 0) {
        int d = bp % 10; 
        sum += d; 
        bp /= 10;
    }
    return sum;
}
int main() {
    int number = 2;
    long power = 1000;
    powersum(number, power);
}