#include <bits/stdc++.h>

using namespace std;

vector<int> store;

int cnt_div(int n) {
    store.clear();
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            store.push_back(i);
            if (i != n / i) {
                store.push_back(n / i);
            }
        }
    }
    return store.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << cnt_div(n) << endl;
    }

    return 0;
}
