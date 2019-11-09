#include <iostream>

using namespace std;

int main() {
  long long n, x;
  int pos = 0;
  int neg = 0;
  int zero = 0;
  long long cont = 0;
  cin>>n;
  for(long long i = 0; i < n ; i++){
    cin>>x;
    if(x > 0){
      pos++;
      cont+= (x - 1);
    }
    else if(x < 0){
      neg++;
      cont+= (-1 - x);
    }
    else {
      zero++;
      cont++;
    }
  }
  if(zero == 0){
    if(neg % 2 == 0)
      cout<<cont;
    else
      cout<<cont + 2;
  } else
    cout<<cont;
}