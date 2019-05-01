#include<algorithm>
#include<math.h>
#include<vector>
#include<cstdio>
using namespace std;
int power[1000];

int main() {
    int total = 0;
    for (int i = 0;i < 1000;i++){
        power[i] = 0;
    }
    power[999] = 2;
    for (int a = 2;a <=1000;a++) {
        for(int i = 0;i < 1000;i++) {
            power[i] = 2*power[i];
        }
        for(int i=999;i>0;i--) {
            power[i-1] += power[i]/10;
            power[i] = power[i]%10;
        }
    }
    for(int i = 0;i<1000;i++) {
        total+=power[i];
    }
    printf("%d", total);
}

