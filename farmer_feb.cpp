#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, count;
        cin >> x >> y;
        int j = 0;
        int check = 1;
        count = x + y + 1;
        while (check == 1)
        {

            int i = 2;
            for (int i = 2; i <= count; i++)
            {
                if (count % i == 0)
                {
                    break;
                }
            }
            if (i == count)
                check = 0;
            i++;

            count++;
        }
        cout << 1 << endl;
    }

    return 0;
}