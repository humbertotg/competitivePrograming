#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, d;
  cin>>n>>d;
  string path;
  cin>>path;
  int cont = 0;
  
  int p1 = 0;
  int p2 = 0;
  while(p1 < n - 1){
    if(p1 + d < n - 1){
      p2 = p1 + d;
    } else
      p2 = n-1;
    while(path[p2] == '0'){
      p2--;
    }
    if(p1 == p2){
      cont = - 1;
      break;
    } 
    cont++;
    p1 = p2;
  }
  cout<<cont;
}