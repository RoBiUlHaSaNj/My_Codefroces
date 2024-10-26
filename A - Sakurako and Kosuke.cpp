

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

int main()
{
    int t;
    cin >> t;

    while (t--)

    {
        int n;
        cin >> n;

        int x = 0,sk = 1,sk_m = 1;


        while (true)
        {
            if (sk % 2 == 1)x -= sk_m;

            else x += sk_m;
            if (x < -n || x > n)
            {
                if (sk % 2 == 1) cout << "Sakurako" << endl;
                else cout << "Kosuke" << endl;

                break;
            }
            sk_m += 2;
            sk++;
        }
    }


}
