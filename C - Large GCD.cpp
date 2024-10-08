#include <bits/stdc++.h>
using namespace std;
#define lp(i, n) for (int i = 0; i < n; i++)
#define in_vec(v, n) vector<ll> v(n); lp(i, n) cin >> v[i];
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

using ll = long long;
using vll = vector<ll>;
using vi = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

const int N = (int) 2e5 + 5;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 9;

#define nl '\n'
#define ff first
#define ss second
#define szof(x) (int)x.size()
#define all(x) x.begin(), x.end()
#include <bits/stdc++.h>

int main() {

	int t;
	cin >> t;
	while (t--) {
		ll n, m;
		 cin >> n >> m;
		if (n % 2 == 0 || m % 2 == 0) cout << "2\n";
		else cout << "12\n";
	}
}
