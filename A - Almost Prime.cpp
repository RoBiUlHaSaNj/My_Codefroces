#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;


    vector<int> pf(n + 1, 0);


    for (int i = 2; i <= n; i++) {
        if (pf[i] == 0) {
            for (int j = i; j <= n; j += i) {
                pf[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (pf[i] == 2) {
          count++;
        }
    }


    cout << count << endl;

    return 0;
}
