#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> bitcount(30);
        while(n--){
            int num;cin>>num;
            for(int i =0; i<30;i++){
                if(num & (1 <<i))
                bitcount[i]++;

            }
        }
        int count =0;
        for(int i =0;i<30;i++){
            if(bitcount[i]>1)
            count += pow(2,i); 
        }
        cout<<count<<endl;
    }





    return 0;
}