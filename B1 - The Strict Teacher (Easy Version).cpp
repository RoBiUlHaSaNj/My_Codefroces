

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> arr(m);
        for (int &i : arr) cin >> i;
        sort(arr.begin(), arr.end());

        while (q--) {
            int x;
            cin >> x;

            // Find the closest teacher positions to the left and right of David
            int r = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            int l = r - 1;

            // Case when David is right of all teachers
            if (r == m) {
                cout << (n - x) + (x - arr[l]) << endl;
            }
            // Case when David is left of all teachers
            else if (l == -1) {
                cout << (x - 1) + (arr[r] - x) << endl;
            }
            // Case when David is between two teachers
            else {
                int reml = x - arr[l];
                int remr = arr[r] - x;
                cout << abs(reml -remr)/2 + min (reml, remr) << endl;
            }
        }
    }

    return 0;
}


