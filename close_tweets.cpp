#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k;
    while(k--){
        int count =0;
        string s;
        cin>>s;
        cin>>x;
        if(s == "CLOSEALL"){
        count = 0;
        cout<<count<<endl;

        }else{
            if(s == " CLICK")
                count += 1+x; 
        
        } 
        cout<<count<<endl;;

        
    }




    return 0;
}