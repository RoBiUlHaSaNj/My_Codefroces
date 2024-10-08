

#include <bits/stdc++.h>
using namespace std;

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

// Debugging macros
#define error(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
  cerr << name << " = " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
  const char* comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << " = " << arg1 << " |";
  __f(comma + 1, args...);
}




vector<ll> find_divisor(ll n) {
    vector<ll> div;
    for (ll i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            div.push_back(i);             
            if (i != n / i) {
                div.push_back(n / i);    
            }
        }
    }
    div.push_back(n);  
    sort(div.begin(), div.end()); 
    return div;
}

void solve() {
    ll t;
    cin >> t;  

    vector<ll> divisors = find_divisor(t);  

    for (size_t i = 0; i < divisors.size(); ++i) {
        for (size_t j = i + 1; j < divisors.size(); ++j) {
            ll a = divisors[i];
            ll b = divisors[j];
            ll c = t / (a * b);

        
            if (c > 1 && c != a && c != b && a * b * c == t && t % c == 0) {
                cout << "YES" << nl;
                cout << a << " " << b << " " << c << nl;
                return;
            }
        }
    }

    cout << "NO" << nl;
}

int main() {
        // freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; 

    while (n--) {
        solve(); 
    }

   
}
