
#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;


        int n = 360 / (180 - a);

        if (360 % (180 - a) == 0 && n >= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
