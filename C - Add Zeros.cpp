

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




ll solve(ll M, map<ll, vector<ll>>& mp, map<ll, ll>& cont) {
    if (cont.count(M))
        return cont[M];
    ll ans = M;
    if (mp.count(M)) {
        for (ll i : mp[M]) {
            ll ana = M + i - 1;
            ans = max(ans, solve(ana, mp, cont));
        }
    }
    return cont[M] = ans;
}

/*
void printMap(const map<ll, vector<ll>>& m) {
    for (const auto& [key, value] : m) {

        for (ll v : value) {
            cout << v << " ";
        }
        cout << nl;
    }
}

void printMap(const map<ll, ll>& m) {
    for (const auto& [key, value] : m) {
        cout << value << nl;
    }
}
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n + 1);


      map<ll, vector<ll>> mp;


        map<ll, ll> dp;

        for (ll i = 1; i <= n; ++i) {
            cin >> arr[i];
        }

        for (ll i = 2; i <= n; ++i) {
            ll s = arr[i] + (i - 1);
            //dp[s].push_back(i);

            mp[s].push_back(i);

        }


       //  printMap(mp);

        ll ans = solve(n, mp, dp);


      //  printMap(dp);


        cout << ans << nl;
    }

}
