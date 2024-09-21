
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, sum = 0;
        cin >> n;

        vector<ll> arr(n);

     
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(), arr.end());

       
        ll x = arr[n / 2] * (2 * n) - sum + 1;

       //need 2 m
        if (n <= 2) {
            cout << -1 << endl;
            continue;
        }

       //1
        if (x < 0) {
            cout << 0 << '\n';
        } else {
            cout << x << '\n';
        }
    }

   
}
