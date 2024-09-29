#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);


    for (auto &x : a)
        cin >> x;


    int maxa = LLONG_MIN;
    for (auto x : a)
        maxa = max(maxa, x);


    int allsum = 0;
    for (auto x : a)
       allsum += x;


    for (int i = n; i > 0; i--) {
        int e = (allsum + k) / i;

        // Check conditions to continue
        if (e * i <= allsum - 1)
            continue;
        if (e <= maxa - 1)
            continue;


        cout << i << endl;
        return;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    
}
