#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, b;
    cin >> t;
    while (t--)
    {
        cin >> b;
        int count = b / 2 - 1;
        cout << count * (count + 1) / 2 << endl;
    }

    return 0;
}