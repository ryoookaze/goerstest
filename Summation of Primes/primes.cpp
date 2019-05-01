#include<algorithm>
#include<math.h>
#include<vector>
#include<cstdio>
using namespace std;
const int M=1010;
vector<int> primes;
int bil[1000];

bool is_prime(int i)
{
    int u=(int)sqrt(i);
    for (int j=0; primes[j]<=u&&j<primes.size(); ++j) {
        if (i%primes[j]==0)
        return false;
    }
    return true;
}

int main()
{
    int testcase,a,b;
    primes.push_back(2);
        for (int i=3;i<=M;i+=2) {
            if (is_prime(i))
            primes.push_back(i);
    }
    int input;
    long long total = 0;
    scanf("%d",&input);
    for (long long i = 2;i<=input;i++)
    {
        if(is_prime(i)) total+=i;
        
    }
    printf("%lld\n",total);
}