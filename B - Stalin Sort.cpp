
#include <bits/stdc++.h>
using namespace std;


using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

//const int N   = (int) 2e5 + 5;
//const int MOD = (int) 1e9 + 7;
//const int INF = (int) 1e9 + 9;
#define MaXN 100005
#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()

#define int long long

#define Max 100005




void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i ; j < n; j++) {
            if (a[j] <= a[i]) cnt++;
        }
        ans = max(ans, cnt);
    }

    cout << n - ans << endl;
}


int32_t main() {
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)solve();


}
