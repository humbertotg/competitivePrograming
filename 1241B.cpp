#include <iostream>
#include <string>

using namespace std;

int main() {
  int q;
  cin>>q;
  string s1,s2;
  bool acomplished = false;
  for(int i = 0; i < q; i++){
    acomplished = false;
    cin>>s1>>s2;
    for(int j = 0; j < s1.length(); j++)
      for(int k = 0; k < s2.length();k++)
        if(s1[j] == s2[k])
          acomplished = true;

    if(acomplished)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    }
  }