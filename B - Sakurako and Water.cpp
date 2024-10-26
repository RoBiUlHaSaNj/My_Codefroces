

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

#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()


const int N = 1e3 + 5;
int a[N][N];
int t;
 // map<int, int> v;
void slove(int n) {
    int cnt = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            //  a[i - j] = min(a[i - j], v[i][j]);
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < 0) {
                int ans = abs(a[i][j]);
                cnt += ans;







                for (int k = 0; k < n; k++) {
                    if (i + k < n && j + k < n) {
                        a[i + k][j + k] += ans;
                         //v[i + k][j + k]+=ans;
                    }
                }
            }
        }
    }

    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
     //t=1;
    while (t--) {
        int n;
        cin >> n;
        slove(n);
    }


}









