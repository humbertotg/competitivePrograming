#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int cont = 0;
  int ans = 0;
  int arr[n];
  for(int i = 0; i < n;i++)
    cin>>arr[i];


  for(int i = 0; i < n ; i++){
    if(arr[i] >= arr[i - 1])
      cont++;
    else
      cont = 1;
    ans = max(cont,ans);
  }  

  cout<<ans;

  

}	