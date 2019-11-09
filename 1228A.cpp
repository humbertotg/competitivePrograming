#include <iostream>
#include <string.h>

using namespace std;

int main() {
  bool digits[10];
  memset(digits,0,11);
  int l, r;
  bool acomplished = false;
  cin>>l>>r;
  int num;
  int ans = -1;
  for(int i = l; i <= r;i++){
    num = i;
    memset(digits,0,11);
    while(num){
      int digit = num % 10;
      if(!digits[digit]){
        digits[digit] = true;
      } else
        break;
      num = num / 10;
    }

    if(num == 0){
      acomplished = true;
      ans = i;
      break;
    }
  }
  if(acomplished)
    cout<<ans;
  else
    cout<<ans;
}