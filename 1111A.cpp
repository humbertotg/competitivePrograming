#include <iostream>
 
using namespace std;
 
bool isVowel(char x){
  if(x == 'a')
    return true;
  else if(x == 'e')
    return true;
  else if(x == 'i')
    return true;
  else if(x == 'o')
    return true;
  else if(x == 'u')
    return true;
 
  return false;  
}
 
int main() {
  string s1,s2;
  cin>>s1>>s2;
  bool acomplished = true;
  if(s1.length() == s2.length()){
    for(int i = 0; i < s1.length();i++){
      if( isVowel(s1[i])^isVowel(s2[i])){
          acomplished = false;
          break;
      }
    }
    if(acomplished)
      cout<<"Yes";
    else
      cout<<"No";
    
  } else 
    cout<<"No";
}