#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int rev =0;
    while (n > 0)
    {
        int last = n % 10;
        rev = (rev * 10 + last);
        n = n / 10;
    }
    return rev;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int rev = 0;
        int c = reverse(n);
        if (n == c)
        {
            cout << "wines" << endl;
        }
        else
        {
            cout << "loose" << endl;
        }
    }

    return 0;
}