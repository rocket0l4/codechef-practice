#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[105] = {};
        int m, x, y;
        cin >> m >> x >> y;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            arr[max(1, a - x * y)]++;
            arr[min(100, a + x * y) + 1]--;
        }
        int count = 0;
        for (int i = 1; i <= 100; i++)
        {
            arr[i] += arr[i - 1];
            if (arr[i] == 0)
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}