#include<bits/stdc++.h>
#include<string.h>
using namespace std;
// int check(string s){
//     int l = s.length();
//     for(int i=0;i<l/2;i++){
//         if(s[i] != s[l-i-1])
//             return false;
//     }
//     return true;
// }
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0,sum =0;
        cin>>n;
        string s;
        cin>>s;
        for(int i =0;i<n;i++){
            if(s[i] == '0'){
                count +=1;
            }else{
                sum +=1;
            }
        }
        if(n%2 != 0){
            cout<<"Yes"<<endl;
        }else{
            if(count %2 == 0 && sum % 2 == 0){
                cout<<"Yes"<<endl;
            }else if(count == sum){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
            
        }
    }
    





    return 0;
}