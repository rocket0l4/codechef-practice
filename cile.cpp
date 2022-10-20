#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p;
    cin>>t;
    while(t--){
        cin>>p;
        int count =0,b = 2048;
        while(p>0){
            count = count + p/b;
            p = p %b;
            b = b /2;

        }
        cout<<count<<endl;

    }






    return 0;
}