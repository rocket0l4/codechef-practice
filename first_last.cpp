#include <bits./stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int temp =n;

        while (temp/= 10)
        {
            sum++;
        }
        int last = n%10;
        int first = n/pow(10,sum);
        cout<<first+last<<endl;
    }
    return 0;
}