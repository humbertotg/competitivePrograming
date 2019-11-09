#include <iostream>

using namespace std;

int main() {
  double x, y, z;
  double a, b, c;
  cin>>x>>y>>z;
  cin>>a>>b>>c;
  int cont = 0;
  int p;

  if(x > a)
    cont++;
  else 
    a = a - x;
  if((a + b) < y)
    cont++;
  else 
    p = (a+b) - y;
  if(p + c < z)
    cont++;
  
  if(cont == 0)
    cout<<"YES";
  else
    cout<<"NO";

}