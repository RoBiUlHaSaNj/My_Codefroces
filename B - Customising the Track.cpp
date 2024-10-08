

#include <bits/stdc++.h>
using namespace std;

int  main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while(T--) {

       //all sum/n
       int n;
       cin>>n;
       vector<int>a(n);

long long  sum=0;

for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
long long k=sum%n;
//cout<<sum/n;
//sum%n;

//cout<<k;
long long ans=k*(n-k);
cout<<ans<<'\n';
}
}
