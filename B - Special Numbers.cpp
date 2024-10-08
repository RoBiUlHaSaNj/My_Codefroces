#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
ll power(ll base,ll n)
{
	ll result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%mod;
			n--;
		}
		else {
			base=(base*base)%mod;
			n/=2;
		}
	}
	return result%mod;
}
int main()
{
  /*  3 4
    1 2 3 4
    0 1
    4/2=2 2/2=0

    2 12
    1 2 3 4 5 6 7 8 9 10 11 12
    0 1 2 3 4 5 6 7 8  9 10 11
    0 0 1 1 0 0
    12/2 6 6/2 3/2=1 1/2=0
    2^2+2^3
    */


    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string v;
        while(k)
        {
            if(k%2==0)v+='0';
            else v+='1';
            k/=2;
        }
        ll ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=='1')ans+=power(n,i);
            ans%=mod;
        }
        cout<<ans<<endl;
    }
}
