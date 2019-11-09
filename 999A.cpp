#include <iostream>
#include <deque>

using namespace std;


int main() {
  int n, k;
  cin>>n>>k;
  int cont = 0;
  deque<int> d1;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    d1.push_back(x);
  }
 
  
  while(!d1.empty()){
    int sid = 0;
    if(d1.back() <= k){
      d1.pop_back();
      cont++;
    } else
      sid++;
    if(d1.empty())
      break;
    if(d1.front() <= k){
      d1.pop_front();
      cont++;
    } else
      sid++;
    if(sid == 2)
      break;
  }
  cout<<cont;
  

}