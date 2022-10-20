#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,val, count = 0, k = 0,i;
        cin>>n;
        vector<int> v;
        for (i = 0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        for (i = 0; i < n; i++)
        {
            count = 1 + i + k;
            if (count == v[i])
                k++;
        }
        cout << k << endl;
    }

    return 0;
}