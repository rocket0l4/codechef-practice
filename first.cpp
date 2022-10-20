#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        int sum1 = a1 + a2;
        int sum2 = b1 + b2;
        int sum3 = c1 + c2;
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            cout << sum1 << endl;
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            cout << sum2 << endl;
        }
        else if (sum3 >= sum1 && sum3 >= sum2)
        {
            cout << sum3 << endl;
        }
    }

    return 0;
}