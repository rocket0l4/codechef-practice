#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float s, hr, da, gross,gross_1;
        cin >> s;
        if (s < 1500)
        {
             hr = (float)s * (0.90);
             da = (float)s * (0.1);
             gross = (float)s + (hr + da);
            cout <<fixed<<setprecision(2)<< gross << endl;
        }
        else 
        {
            hr =(float) s +500;
            da =(float) s*(0.98);
            gross_1 =  (hr+da);
            cout<<fixed<<setprecision(2) << gross_1 << endl;
        }
    }
}