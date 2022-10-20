#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,count =0;
        cin>>k;
        while(k%2==0){
            k= k/2;
            count += 1;


        }
        cout<<count<<endl;

    }






    return 0;
}