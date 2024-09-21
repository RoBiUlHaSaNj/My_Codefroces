#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<long long> arr(n);

        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long sum = 0;
        double res = 1e13;
        double x;
        long long res2 = 0;


        for (i = 0; i < n; i++) {
            sum += arr[i];
            x = (double)sum / (i + 1);
            res = min(res, x);
        }

        sum = 0;

        for (i = n - 1; i >= 0; i--) {
            sum += arr[i];
            x = ceil((double)sum / (n - i));
            res2 = max(res2, (long long)x);  
        }


        cout << res2 - (long long)res << '\n';
    }

    return 0;
}
