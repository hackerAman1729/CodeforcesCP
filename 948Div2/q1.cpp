// done in contest

#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,m ;
    cin >> n >> m;
    if (n>=m && ((n-m)%2 ==0)){
      cout <<"YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}