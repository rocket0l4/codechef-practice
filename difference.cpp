#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum = 0;
    cin>>a>>b;
    if(a>b){
        sum = a - b;
    }else{
        sum = a + b;
    }
    cout<<sum<<endl;



    return 0;
}