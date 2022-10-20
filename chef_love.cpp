#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int a=0,b=0;
       for(int i = 0; i<n; i++)
       if(s[i]== '1')
       a++;
       else
       b++;
       int z =0;
       z = max(z,min(a,b)-1);
       cout<<z<<endl;
            
	       
	}

	
	return 0;
}
