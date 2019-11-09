#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int base;
  int n;
  int cont = 0;
  int last = 0;
  cin>>base;
  cin>>n;
  int x;
  for(int i = 0; i < n -1 ; i++){
    cin>>x;
    if(base % 2 == 1 && x % 2 ==1)
      cont++;
  }
  cin>>last;
  if(last % 2 == 1)
    cont++;
  if(cont % 2 == 1)
    cout<<"odd";
  else
    cout<<"even";

}