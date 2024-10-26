#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

//const int N = 2e5 + 5;

#define nl '\n'
#define ff first
#define ss second
#define szof(x) (int)x.size()
#define all(x) x.begin(), x.end()

const int MAX_SIZE = 2e5 + 5;

int main() {
    ios::sync_with_stdio(0), cin.tie(0),
     cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        ll n;

        ll preSum = 0;

        ll Count = 0;

        ll arr[MAX_SIZE];

        map<ll, bool> Sum;

        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            preSum += arr[i];

            if (Sum[preSum] || preSum == 0) {
                Count++;

                Sum.clear();

                preSum = 0;

            } 
            else Sum[preSum] = true;

        }
        cout << Count << endl;
    }


}
