
#include<bits/stdc++.h>
using namespace std;
1 \le n \le 10^5
1 \le x \le 10^6
const int MAX_X = 1000000;

int main() {
    // Precompute divisor counts
    vector<int> div_count(MAX_X + 1, 0);
    for (int i = 1; i <= MAX_X; ++i) {
        for (int j = i; j <= MAX_X; j += i) {
            div_count[j]++;
        }
    }

    // Input processing
    int n;
    cin >> n;
    vector<int> results(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        results[i] = div_count[x];
    }

    // Output results
    for (int res : results) {
        cout << res << endl;
    }

    return 0;
}
