#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main()
{

    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(k);
    vector<int>ans;
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
        ans.push_back(a[i]);
    }
    for(int i =0; i<k; i++)
    {
        cin>>b[i];
        ans.push_back(b[i]);
    }
    sort(ans.begin(),ans.end());

    for(int i =0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}
