#include <iostream>


using namespace std;

int main() {
  int n, t;
  int minPast = 1000000000;
  int minCurr = 0;
  int route;
  
  cin>>n>>t;
  int numBus;
  int busTime;

  for(int i = 0; i < n; i++){
    int j = 0;
    cin>>numBus>>busTime;
    bool acomplished = true;
    while(acomplished){
      if(numBus + busTime*j >= t){
        acomplished = false;
        minCurr = numBus + busTime*j;
      }
      j++;
    }
    if(minCurr < minPast){
      minPast = minCurr;
      route = i;
      }
  }
  cout<<route + 1;
  cout<<endl;
}
