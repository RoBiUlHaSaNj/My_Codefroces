#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll mod = 998244353;
    ll n,m;
    cin>>n>>m;
    ll o =n+m;
    ll ans =1;

    for(int i =0;i<o;i++)ans=(ans*2)%mod;
    cout<<ans<<endl;

    }



