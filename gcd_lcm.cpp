#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int pre =__gcd(a,b);
        int pptr = (a*b)/pre;
        cout<<pre<<" "<<pptr<<endl;
    }




    return 0;
}