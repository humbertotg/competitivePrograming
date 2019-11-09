#include <iostream>


using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++){
    if(i > 0){
    int x;
    cin>>x;
    arr[i] = arr[i - 1] + x;
    } else
      cin>>arr[i];
  }
  int m;
  cin>>m;
  for(int i = 0; i < m; i++){
    int x;
    cin>>x;
    int low = 0;
    int high = n;
    while(low < high){
      int mid = (low + high) / 2;
      if(arr[mid] >= x)
        high = mid;
      else
        low = mid + 1;
    }
    cout<<high + 1<<endl;
  }
  
}