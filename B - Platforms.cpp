#include <bits/stdc++.h>
using namespace std;


typedef long long LLD;
//typedef unsigned long long ULLD;


int main() {
    int n, d, m, l;
    cin >> n >> d >> m >> l;

    for (int i = 0; i < n; i++) {
       LLD L= static_cast<LLD>(i) * m + l;
        LLD R = static_cast<LLD>(i + 1) * m;
        for (LLD j = L + 1; j < R; j++) {
            if (j % d == 0) {
                cout << j << "\n";
                return 0;
            }
        }
    }

    for (LLD i = static_cast<LLD>(n - 1) * m + l + 1; ; i++) {
        if (i % d == 0) {
            cout << i << "\n";
            return 0;
        }
    }
}
