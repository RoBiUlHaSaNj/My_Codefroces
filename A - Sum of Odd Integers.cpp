
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    int a, b;

    cin>>t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long minSum = k * k;
        if (n >= minSum && (n % 2 == k % 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
