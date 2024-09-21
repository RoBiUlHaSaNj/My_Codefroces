#include<bits/stdc++.h>
using namespace std;


#define ll long long

ll n, k;
vector<ll> arr;


//i need  perform
// 0 0  0 0 0 1 1 1 1
 bool task (ll v)
 {
     ll p =0;
     for(int i =n/2;i<n;i++)
     {
         if(v>arr[i])p+=(v-arr[i]);
         if(p>k)return false;

     }
     return p<=k;
 }



int main()
{
    cin>>n>>k;
    //vector<int>arr(n,0);
    arr.resize(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll low =0,high=1e18,ans=0,mid=0;
     while (low <= high) {
        mid = (low + high) / 2;
        if (task(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        //cout << ans << endl;
    }
cout << ans << endl;

}







