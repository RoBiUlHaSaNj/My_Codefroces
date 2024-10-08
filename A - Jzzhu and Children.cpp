

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double n;
    cin >> t >> n;

    vector<int> A(t);
    for (int i = 0; i < t; i++) {
        cin >> A[i];
    }

    int max_steps = 0;
    int ans = 0;

    for (int i = 0; i < t; i++) {
        int steps = ceil(A[i] / n);
        if (steps >= max_steps) {
            max_steps = steps;
            ans = i;
        }
    }

    cout << ans + 1 << endl;

}
