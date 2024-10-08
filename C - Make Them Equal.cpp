#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    bool flag=true;
    for(auto x:s)
    {
        if(x!=c)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<0;
        return;
    }
    for(int i=n/2; i<n; i++)
    {
        if(s[i]==c)
        {
            cout<<1<<endl<<i+1;
            return;
        }
    }
    cout<<2<<"\n"<<n-1<<" "<<n;
}

signed main()
{
    fast;


    //freopen("input.txt", "r", stdin);

    //freopen("output.txt", "w", stdout);

    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
}
