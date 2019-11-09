#include <iostream>

using namespace std;

int main() {
  long long n;
  long long nmax = 100010;
  cin>>n;
  long long arr[nmax];
  bool acomplished = false;
  arr[0] = 0;
  for(long long i = 1; i <= nmax; i++){
    arr[i] = arr[i - 1] + i;
  }


  for(int i = 1; i < nmax; i++){
    long long low = 1;
    long long high = nmax - 1;
    while(low < high){
      long long mid = (low + high) / 2;
      if(arr[mid] == n - arr[i]){
        acomplished = true;
        break;
      }
      else if(arr[mid] < n - arr[i]){
        low  = mid + 1;
      } else
        high = mid;
    }
  }
  if(acomplished)
    cout<<"YES";
  else
    cout<<"NO";

  
}