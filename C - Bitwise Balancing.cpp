#include<bits/stdc++.h>
using namespace std;
#define ll long long
void slove()
{
    ll a = 0, b, c, d;
    cin >> b >> c >> d;
    a = c ^ d;
    if ((a | b) - (a & c) == d)
    {
        cout << a << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
        slove();
    
}
