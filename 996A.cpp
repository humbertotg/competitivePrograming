#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  int cont = 0;
  int mod = 0;
  
  cont+= n / 100;
  mod = n % 100;
  n = mod;

  cont+= n / 20;
  mod = n % 20;
  n = mod;

  cont+= n / 10;
  mod = n % 10;
  n = mod;

  cont+= n / 5;
  mod = n % 5;
  n = mod;

  cont+= n / 1;
  mod = n % 1;
  n = mod;

  cout<<cont;
}