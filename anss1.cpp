#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,m,ans=0;
       cin>>n>>m;
       int arr[n];
       for(int i = 0;i<n;i++){
           cin>>arr[i];
       }
       if(m<=2){
           ans =2;
       }else if(m>2){
           ans = n*m;
       }
       cout<<ans<<endl;


    }





    return 0;
}