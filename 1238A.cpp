#include <iostream>

using namespace std;

int main() {
  long int n;
  long double x,y;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>x>>y;
    int res = x - y;
    if(res == 1){
      cout<<"NO";
    } else if(res != 1)
      cout<<"YES";
    cout<<endl;
  }
}