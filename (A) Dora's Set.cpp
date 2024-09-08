#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;

    int ans = ((r + 1) / 2 )- (l / 2);//cheek even bound 
    ans /= 2;

   cout << ans << "\n";
}

int main() {


    int t;
   cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

