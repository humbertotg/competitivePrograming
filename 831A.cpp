#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  int last;
  bool acomplished = true;
  int status = 0;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  last = arr[0];
  
  for(int i = 1; i < n; i++){
   if(status == 0){
     if(arr[i] < last)
      status = 2;
     if(arr[i] == last)
      status++;
   }
   if(status == 1){
     if(arr[i] > last){
       acomplished = false;
       break;
     }
     if(arr[i] < last)
      status++;
   }
   if(status == 2){
     if(arr[i] >= last){
       acomplished = false;
       break;
     }
   }
   last = arr[i];
  }

  if(acomplished)
    cout<<"Yes";
  else  
    cout<<"No";
}

