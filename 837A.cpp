#include <iostream>
#include <string>
#include <locale>  
#include <cctype>

using namespace std;

int main() {
  int n;
  cin>>n;
  string text;
  cin.ignore();
  getline(cin,text);
  int ans = 0;
  int cont = 0 ;
  for(int i = 0; i < n;i++){
    if(text[i] != ' '){
      if(isupper(text[i]))
        cont++;
      }
    else{
      if(cont > ans)
        ans = cont;
        cont = 0;
    }
    if(i == n - 1){
      if(cont > ans)
        ans = cont;
        cont = 0;
    }
  }
  cout<<ans;
}