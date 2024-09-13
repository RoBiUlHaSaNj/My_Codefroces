#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int sum = 0, maxSum = INT_MIN, oneCount = 0, hold = 0;

    for (int i = 0; i < t; i++) {
        cin >> hold;
        if (hold == 0) {
            sum++;
        } else {
            sum--;
            oneCount++;
        }

        maxSum = max(maxSum, sum);

        if (sum < 0) {
            sum = 0;
        }
    }

    // Special case: If all elements are 1, we can only flip and lose one 1.
    if (oneCount == t) {
        cout << t - 1 << endl;
    } else {
        cout << maxSum + oneCount << endl;
    }

    return 0;
}
