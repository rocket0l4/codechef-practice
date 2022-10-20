#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 1; i<=n; i++){
            
            
            int sum = (i*(i+1))/2;
            if(sum ==n){
                cout<<i<<endl;
                break;
            }else if(sum >n){
                cout<<i-1<<endl;
                break;
            }
        }
    }




    return 0;
}