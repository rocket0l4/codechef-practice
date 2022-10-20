#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, p;
        cin >> m >> n >> p;
        while (p--)
        {

            if (m > n)
                n++;
            else if (n > m)
                m++;
            else
                break;
        }
        cout << abs(m-n) << endl;
    }

    return 0;
}