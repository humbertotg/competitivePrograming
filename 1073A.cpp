#include <iostream>
#include <string>

using namespace std;


int main() {
  int n;
  string s;
  cin>>n>>s;
  bool acomplished = false;
  
  string ans;
  
  for(int i = 0; i < n - 1;i++){
    if(s[i] != s[i + 1]){
      acomplished = true;
      ans += s[i];
      ans += s[i + 1];
      break;
    }
  }
  
  if(acomplished){
    cout<<"YES"<<endl;
    cout<<ans;
  } else
    cout<<"NO";
    
}