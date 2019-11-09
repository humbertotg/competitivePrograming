#include <iostream>
#include <cmath> 
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
  long double n,k;
  cin>>n>>k;

  long double red = (n*2) / k;
  red = ceil(red);
  long double green = (n*5)/k;
  green = ceil(green);
  long double blue = (n*8)/k;
  blue = ceil(blue);
  cout<<fixed<<setprecision(0);
  cout<<(red + green + blue);
}