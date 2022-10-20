#include<bits./stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;

  while(t--){
      cin>>n;
      int f =1;
      for(int i =1; i<=n; i++){
          f = f*i;
          
      }
      cout<<f<<endl;
  }

    return 0;
}