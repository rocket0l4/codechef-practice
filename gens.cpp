#include<bits/stdc++.h>
using namespace std;
int main(){
    char R,B,G;
   char a,b;
   R = 100;
   B = 50;
   G = 10;
   cin>>a>>b;
   if(a == 'R' || b == 'R'){
       cout<<'R'<<endl;
   }else if(a == 'G'){
       cout<<b<<endl;
   }else if(b == 'G'){
       cout<<a<<endl;
   }else if(a == b){
       cout<<a<<endl;
   }


    return 0;
}