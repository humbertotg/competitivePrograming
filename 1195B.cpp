#include <iostream>
#include <math.h>

using namespace std;

int main() {
  long long n,k;
  cin>>n>>k;
  long long result = (sqrt(9+8*(n+k))-3) / 2;
  cout<<n - result;
}