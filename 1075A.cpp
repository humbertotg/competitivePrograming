#include <iostream>

using namespace std;


int main() {
  long double n;
  long double x, y;
  long double whiteMax;
  long double blackMax;
  cin>>n;
  cin>>x>>y;
  if(x - 1 > y - 1)
    whiteMax = x - 1;
  else 
    whiteMax = y - 1;
  
  if(n - x > n - y)
    blackMax = n - x;
  else
    blackMax = n - y;
  
  if(whiteMax <= blackMax)
    cout<<"White";
  else
    cout<<"Black";
}