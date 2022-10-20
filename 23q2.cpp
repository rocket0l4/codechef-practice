#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
        cin>>n;
        int count = n;
        string s;
        cin>>s;
        for(int i =1; i<n;i++){

            if(s[i] == s[i-1])
            count--;
        }
        cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }




    return 0;
}