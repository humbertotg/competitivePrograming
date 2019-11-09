#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int q;
  long long left,right;
  cin>>q;
  int sum = 0;
  for(int i = 0; i < q; i++){
    cin>>left>>right;
    if(left % 2 == 0 && right % 2 == 0)
      sum = (left - right) / 2 + right;
    else if(left % 2 == 1 && right % 2 == 0)
      sum = (right - left + 1) / 2;
    else if(left % 2 == 0 && right % 2 == 1)
      sum = (right - left + 1) / 2 * -1;
    else if(left % 2 == 1 && right % 2 == 1) 
      sum = ((left - right) / 2 + right) * -1;
    cout<<sum<<endl;
  }
}