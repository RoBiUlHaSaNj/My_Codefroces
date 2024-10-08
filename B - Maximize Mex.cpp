
#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;

        cin>>n>>x;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        int temp=0;
        while(mp[temp]>0)
        {
            if(mp[temp]>1)
            {
                mp[temp+x]=mp[temp+x]+mp[temp]-1;
            }
            temp++;
        }
        cout<<temp<<endl;
    }
}
