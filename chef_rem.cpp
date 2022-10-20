#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, sum, sum_2;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if(a>b)
            sum = a;
        else
            sum = b;
            sum_2 = a+b;
        cout<<sum<<" "<<sum_2<<endl;
    }

    return 0;
}