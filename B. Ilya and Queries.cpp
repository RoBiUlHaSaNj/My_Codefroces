#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();


    vector<int> prefix(n, 0);


    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1];
        if (s[i] == s[i - 1]) {
            prefix[i]++;
        }
    }

    int m;
    cin >> m;


    while (m--) {
        int l, r;
        cin >> l >> r;

        l--; r--;
        int result = prefix[r] - prefix[l];
        cout << result << '\n';
    }

    return 0;
}
