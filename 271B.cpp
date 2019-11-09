#include <iostream>
#include <string>
#include <algorithm>

 
using namespace std;


int main() {
  int n, m;
  int maxn = 100100;
  int ans = maxn;
  bool primes[maxn];
  fill(primes,primes+maxn,false);
  primes[0] = true;
  primes[1] = true;
  for(int i = 2; i*i < maxn;i++){
    if(!primes[i])
      for(int j = i*i; j < maxn;j+=i){
        primes[j] = true;
    }
  }

  cin>>n>>m;
  int rowCont[n];
  fill(rowCont,rowCont + n,0);
  int colCont[m];
  fill(colCont,colCont + m,0);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      int cont = 0;
      int num;
      cin>>num;
      while(primes[num + cont]){
        cont++;
      }
        rowCont[i] = rowCont[i] + cont;
        colCont[j] = colCont[j] + cont;
    }
  }
  sort(rowCont,rowCont + n);
  sort(colCont,colCont + m);
  ans = min(rowCont[0],colCont[0]); 
  cout<<ans;
  
}