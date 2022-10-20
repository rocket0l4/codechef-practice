#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, x[r], y[r],e= 3;
        cin >> r;
        while(e--){
            cin>>x[e]>>y[e];
            int count = x[e] + y[e];
            if(count <= r){
                count++;
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
       

        
      
    }

    return 0;
}