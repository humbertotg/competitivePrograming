#include <iostream>

using namespace std;

int main() {
  int n, tankcap;
  cin>>n>>tankcap;
  int cont = tankcap;

  if(n - 1 < tankcap){
    cont = n - 1;
  } else{
    for(int i = 1; i < n;i++){
      if(n - i > tankcap){
        cont += (i + 1);
        tankcap++;
      }
      tankcap--;
    }
  }
  
  cout<<cont;
}