#include <iostream>
#include <string>

using namespace std;

int main() {
  int q;
  cin>>q;
  int n;
  string x;
  for(int i = 0; i < q; i++){
    cin>>n>>x;
    if(n > 2){
      cout<<"YES"<<endl;
      cout<<"2"<<endl;
      cout<<x[0]<<" "<<x.substr(1,n-1)<<endl;
    } else if(n == 2 && x[0] < x[1]){
      cout<<"YES"<<endl;
      cout<<"2"<<endl;
      cout<<x[0]<<" "<<x[1]<<endl;
    } else
      cout<<"NO"<<endl;
    if(i == q-2)
    cout<<endl;
  } 
  
}