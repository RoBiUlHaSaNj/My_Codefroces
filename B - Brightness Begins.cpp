#include <bits/stdc++.h>
using namespace std;

long long n;
long long l, r, ans;

void solve() {
    cin >> n;
    l = 1;
    r = 2e18;
    ans = 0;

    while (l <= r) {
        long long mid = (l + r) / 2;
        long long t = sqrt(mid);


        while (t * t > mid) t--;
        while ((t + 1) * (t + 1) <= mid) t++;

        long long ps = mid - t;
        if (ps >= n) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
