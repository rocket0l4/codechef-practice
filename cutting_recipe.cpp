#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int food = arr[0];
        for (int i = 1; i < n; i++)
        {
            food = __gcd(food, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (food == 1)
                cout << arr[i] << " ";
            else if (food != 0)
            {

                cout << arr[i] / food<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}