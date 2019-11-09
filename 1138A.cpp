#include <iostream>

using namespace std;

int main() {
  int n;
  int last;
  int arr[n];
  int sushi1 = 0;
  int sushi2 = 0;
  int ans = 0;
  cin>>n;
  
  for(int i = 0; i < n; i++) 
    cin>>arr[i];
  
  for(int i = 0; i < n;i++){
    if(arr[i] == 1){
      sushi1++;
      ans = max(ans,min(sushi1,sushi2));
      if(arr[i + 1] == 2)
        sushi2 = 0;
    }
    if(arr[i] == 2){
      sushi2++;
      ans = max(ans,min(sushi1,sushi2));
      if(arr[i + 1] == 1)
        sushi1 = 0;
    }
  }
 
  ans = max(ans,min(sushi1,sushi2));
  cout<<ans*2;
  
}	