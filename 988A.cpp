#include <iostream>
#include <set>
#include <queue>

using namespace std;

int main() {
  int n, k;
  set<int> s1;
  queue<int> q1;
  int cont = 0;
  cin>>n>>k;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    if(s1.count(x) == 0){
      q1.push(i + 1);
      s1.insert(x);
    }
  }
  if(q1.size() < k){
    cout<<"NO";
  } else{
    cout<<"YES"<<endl;
    for(int i = 0; i < k; i++){
      cout<<q1.front()<<" ";
      q1.pop();
    }
  }

}