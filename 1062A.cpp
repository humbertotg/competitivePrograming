#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n + 1];
  int cont = 0;
  int ans = 0;
  for(int i = 0; i < n; i++)
    cin>>a[i];
  a[n] = a[n - 1] + 1;
  
  for(int i = 0; i < n; i++){
    if(n != 1){
      if(i > 0){
        if(i == n - 1){
            if(a[i] == 1000){
              if(a[i] - a[i - 1] == 1)
                cont++;
            }
          
        }else {
          if(a[i] - a[i - 1] == 1 && a[i + 1] - a[i] == 1){
            cont++;
          } else
            cont = 0;
        }
      } else{
        if(a[i + 1] - a[i] == 1 && a[i] <= 1)
          cont++;
      }
    }
    ans = max(ans,cont);
  }
  cout<<ans;
}