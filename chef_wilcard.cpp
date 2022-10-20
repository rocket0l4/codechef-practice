#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x,y;
        int count =0;
        cin>>x>>y;
        for(int i=0; i<x.length();i++){
            if(x[i] == '?' ||  y[i] == '?'){
                count = 0;
            }else if(x[i] != y[i]){
                count = 1;
                break;
            }
        }
        if(count == 0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }

    }




    return 0;
}