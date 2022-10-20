#include <bits/stdc++.h>
#include <string>
using namespace std;
int solve(){
    int x, c = 0, n = 0, d = 0;
        cin >> x;
        char C, D, N;
        char s[14];
        for (int i = 0; i < 14; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < 14; i++)
        {
            if (s[i] == 'C')
            {
                c = 1;
            }
            else if (s[i] == 'N')
            {
                n = 1;
            }
            else
            {
                d = 1;
            }
        }
        c = 2 * c + d;
        n = 2 * n + d;
        if (c == n)
        {
            cout << (55 * x) << endl;
        }
        else if (c < n)
        {
            cout << (40 * x) << endl;
        }
        else
        {
            cout << (60 * x) << endl;
        }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}