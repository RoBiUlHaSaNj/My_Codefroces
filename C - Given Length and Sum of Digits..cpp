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


int main() {
    fast;

    int m, s;
    cin >> m >> s;

    
    if ((s == 0 && m == 1)) {
        cout << "0 0" << nl;
        return 0;
    }
    if (s == 0 || s > 9 * m) {
        cout << "-1 -1" << nl;
        return 0;
    }

   
    string smallest = "";
    int sum = s;

    for (int i = 0; i < m; i++) {
        for (int d = (i == 0 ? 1 : 0); d < 10; d++) { 
            if (d <= sum && (sum - d) <= 9 * (m - i - 1)) {
                smallest += char('0' + d); 
                sum -= d; 
                break; 
            }
        }
    }


    string largest = "";
    sum = s; 

    for (int i = 0; i < m; i++) {
        for (int d = 9; d >= 0; d--) { 
            if (d <= sum) {
                largest += char('0' + d); 
                sum -= d; 
                break; 
            }
        }
    }

    cout << smallest << " " << largest <<nl;

}
