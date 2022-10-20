#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, k, count = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            m = n % i;
            if (m > count)
            {
                count = m;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}