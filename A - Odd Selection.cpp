
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

//1 odd + 1 even sum =odd
//2 odd + 2 even sum =even
// c odd and even

int main(){
    fast;

    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;

        in_vec(v, n)

        int odd = 0, even = 0;
        lp(i, n) {
            if (v[i] % 2 != 0) odd++; 
            else even++;  
        }

        bool flag = false;
        for (int i = 1; i <= x; i += 2) {
            if (i <= odd && (x - i) <= even) {  // i as odd, x-i as even
                flag = true;
                break;
            }
        }

        if (flag) YES;
        else NO;
    }
}
