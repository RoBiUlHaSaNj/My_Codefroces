#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int  n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++)cin>>arr[i];
      vector<int>ans(n,-1);
      for(int i=n-2;i>=0;i--)
      {
          if(arr[i]!=arr[i+1])ans[i]=i+1;
          else ans[i]=ans[i+1];

      }


    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        if(ans[l]!=-1 && ans[l]<=r) cout<<l+1 <<" "<<ans[l]+1<<'\n';
        else cout<<"-1 "<<" "<<"-1"<<'\n';

    }
    }
    cout<<'\n';
}
