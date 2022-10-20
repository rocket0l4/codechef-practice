#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i--)
    {
        if (n.length() > 3)
        {
            cout << "More than 3 digits" << endl;
        }
        else
        {
            cout << n.length() << endl;
        }
    }

    return 0;
}