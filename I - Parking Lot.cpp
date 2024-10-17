#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int n;
    cin >> n;

    int ans = 2 * 4 * 3 * pow(4, (n - 3)) + (n - 3) * 4 * pow(3, 2) * pow(4, (n - 4));
    cout << ans;

    return 0;
}
