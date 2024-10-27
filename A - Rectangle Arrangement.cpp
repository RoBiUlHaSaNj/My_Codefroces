
#include <bits/stdc++.h>
using namespace std;


using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

const int N   = (int) 2e5 + 5;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 9;

#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()




int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

    ll maxw = 0;
      ll maxh = 0;

        for (int i = 0; i < n; ++i) {
            int w, h;
            cin >> w >> h;
            maxw = max(maxw, (ll)w);
            maxh = max(maxh, (ll)h);
        }

        cout << 2 * (maxw + maxh) << nl;
    }


}
