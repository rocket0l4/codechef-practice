#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        for (int i = 0; i < k; i++)
        {
            int x = i;
            int y = 2;
            int z = i;
            while (z <= n)
            {
                if (z <= n / 2)
                {
                    b[z] = a[x];
                    x += 2;
                }
                else
                {
                    b[z] = a[y];
                    y += 2;
                }
                z++;
            }
            if (i != k - 1)
            {
                for (int j = 0; j <= n; j++)
                {
                    a[j] = b[j];
                }
            }
            
        }
        for (int i = 1; i <= n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        
    }

    return 0;
}