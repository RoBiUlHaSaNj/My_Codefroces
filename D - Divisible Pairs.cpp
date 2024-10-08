#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        
        vector<ll> a(n);
        
        for(auto &x : a) cin >> x;
        
        map<pair<int, int>, int>mpp;
        
        ll cnt = 0;
        
        for(ll i=0; i<n; i++)
        
        {
            ll xx = a[i]%x;
            
            ll yy = a[i]%y;
            
            cnt += mpp[ {(x-xx)%x, yy}];
            
            mpp[ {xx, yy}]++;
            
        }
        
        cout << cnt << endl;
    }
}
