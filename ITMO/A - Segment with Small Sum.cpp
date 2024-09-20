#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main()
{

  ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
   // vector<ll>b(k);
 int maxl=0;
    vector<ll>ans;
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
        //ans.push_back(a[i]);
    }
   // for(int i =0; i<k; i++)
    //{
       // cin>>b[i];
        //ans.push_back(b[i]);
   // }
   // sort(ans.begin(),ans.end());

    //for(int i =0; i<ans.size(); i++)
    //{
        //cout<<ans[i]<<" ";
   // }
   //int r=0;
   int l=0;
   ll cs=0;
   for(int r= 0;r<n;r++){cs+=a[r];

   while(cs>k){cs-=a[l];l++;}
   //int maxl=0;
   maxl=max(maxl,r-l+1);}
   cout<<maxl<<" ";

}
