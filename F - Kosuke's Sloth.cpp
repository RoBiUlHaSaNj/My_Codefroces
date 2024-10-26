#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

#define nl      '\n'

//const int MAX_K = 100000;

const long long MOD = 1e9 + 7;


/*
void solve(map<int, vector<long long>>& fib) {
    for (int k = 1; k <= MAX_K; ++k) {
        vector<ll> fib_k;
        ll a = 1, b = 1;

        fib_k.push_back(a);
        fib_k.push_back(b);

        while (true) {

             fib_k[1] = fib_k[2] = 1;

            long long c = (a + b) % k;
            fib_k.push_back(c);
            a = b;
            b = c;



            if (a == 1 && b == 1) {
                break;
            }
        }

        vector<ll> ans;
        for (int i = 0; i < fib_k.size(); ++i) {
            if (fib_k[i] % k == 0) {
                ans.push_back(i + 1);
            }
        }
        fib[k] = ans;
    }
}
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
      ll n;
        int k;
        cin >> n >> k;

        n = n % MOD;
        if (k == 1) {
            cout << n << nl;
            continue;
        }

        long long f[200005];

        f[1] = f[2] = 1;

        int x = 2;

        int i = 3;
        while (true) {
            f[i] = (f[i - 1] + f[i - 2]) % k;

            if (f[i] == 0) {
                break;
            }

            x = i;
            i++;
        }


        ll result = ((x + 1) * n) % MOD;
        cout << result << nl;
    }


}
