

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{


    int t;cin>>t;
    while(t--){
            int n,k,q;cin>>n>>k>>q;
            vector<int>arr(n);

            for(int i=0;i<n;i++)cin>>arr[i];

            int  l=0,ans=0,p=0;
            while(l<n){
            if (arr[l]<=q)p++;
            else p=0;
            ans += max(0LL, p - k + 1);
            l++;
            }


cout<<ans<<endl;
    }
    //cout<<ans<<endl;
}
