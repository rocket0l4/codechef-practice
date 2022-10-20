#include <bits/stdc++.h>
using namespace std;
#define void vector<int>
#define pot push_back

int main()
{

    void count;
    for (int i = 0; i < 17; i++)
    {
        for (int j = i + 1; j < 18; j++)
        {
            for (int k = j + 1; k < 19; k++)
            {
                for (int l = k + 1; l < 20; l++)
                {
                    int val = (1 << l) + (1 << k) + (1 << j) + (1 << i);
                    count.pot(val);
                }
                if (count.size() == 1000)
                {
                    break;
                }
            }
            if (count.size() == 1000)
            {
                break;
            }
        }
        if (count.size() == 1000)
        {
            break;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << count[i] << " ";
        }
        cout << endl;
    }

    return 0;
}