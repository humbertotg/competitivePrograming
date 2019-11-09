#include <iostream>

using namespace std;

int main() {
  int posi = 0;
  int neg = 0;
  double n;
  cin>>n;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    if(x > 0)
      posi++;
    if(x < 0)
      neg++;
  }
  
    if(posi >= n/2 )
      cout<<1;
    else if(neg >= n/2)
      cout<<-1;
    else 
      cout<<0;
}