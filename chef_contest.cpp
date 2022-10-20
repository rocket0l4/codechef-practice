#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        int count = x + (p*10);
        int sum = y + (q*10);
        if(count < sum ){
            cout<<"Chef"<<endl;
        }else if(count > sum ){
            cout<<"chefina"<<endl;
        }else if(count == sum){
            cout<<"Draw"<<endl;
        }
    }



    return 0;
}