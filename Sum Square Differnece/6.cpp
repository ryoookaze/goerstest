#include<iostream>
using namespace std;

int main() {
  unsigned long long inputbanyak;
  cin >> inputbanyak;
  if (inputbanyak > 100) {
    printf("Invalid\n");
    return 0;
  }
  while(inputbanyak--) {
    unsigned long long masukangka;
    cin >> masukangka;
    unsigned long long total = 0, i; //initializing sum for 1 + 2 + ...
    unsigned long long squaredtotal = 0; // initializing sum for 1^2 + 2^2 + ...

    for (i = 1;i <= masukangka; i++) {
      total += i; //addition natural numbers based on masukangka
      squaredtotal += i*i; //powering each i with 2
    }

    printf("Sum of squared powered number : %lld\n", squaredtotal);
    unsigned long long firstsum = total * total;
    printf("Squared of the sum : %lld\n", firstsum); //multiplying total 
    unsigned long long diff = firstsum - squaredtotal;
    printf("Differences : %lld\n", diff);
  }
  return 0;
}