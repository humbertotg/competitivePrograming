#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>  

using namespace std;

int main() {
  int n;
  cin>>n;
  double ans = 0;
  int radius[n];
  for(int i = 0; i < n; i++)
    cin>>radius[i];

  sort(radius,radius+n,greater<int>());
  for(int i = 0; i < n; i++){
    if(i == n - 1 && n % 2 == 1){
      ans += pow(radius[i],2)*3.1415926535;
    } else if(i % 2 == 0){
      ans += pow(radius[i],2)*3.1415926535 - pow(radius[i + 1], 2)*3.1415926535;
    }
  }

  cout<<setprecision(10)<<ans;

  
}