//The problem is to find all pairs of integers (𝑛,𝑚) such that the difference between their respective sums equals d, with the constraint 
//m>n. Your code correctly implements the logic to compute these pairs based on the conditions described in the problem statement.

#include <bits/stdc++.h>
using namespace std;


#define ll long long

void solve() {
    long long  d;
    cin >> d;
    vector<pair<ll, ll>> ans;

 // (n*(n+1)

    for (ll n = 1;  ((n * (n + 1))/ 2) <= d; n++) {
        ll sum_n = d-(n * (n + 1)) / 2;
     
     if(sum_n<=0)continue;
     if(sum_n%n==0)
        {
            ans.push_back({sum_n/n,(sum_n/n)+n});
     }

     }
    

    cout << ans.size() << endl;
    for (auto it : ans) {
        cout << it.first << " " << it.second << endl;
    }
}

int32_t main() {
    int t = 1;
    for (int tt = 1; tt <= t; ++tt) {
        solve();
    }

}
