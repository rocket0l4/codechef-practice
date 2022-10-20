#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, b;
    cin >> l >> b;
    if ((l * b) > 2*(l + 1))
    {
        cout << "area" << endl;
    }

    else if ((l * b) < 2*(l + b))
    {
        cout << "peri" << endl;
    }

    else
    {
        cout << "eq" << endl;
    }

    return 0;
}