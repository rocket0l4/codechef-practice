#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout<<0;
            }
            for(int i = (n/2)+1; i<=n; i++){
                cout<<1;
            }
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}