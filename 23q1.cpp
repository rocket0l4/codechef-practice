#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, count=0;
        cin >> b >> c;
        count = __gcd(b,c);
        cout<<c/count<<endl;
    }

    return 0;
}