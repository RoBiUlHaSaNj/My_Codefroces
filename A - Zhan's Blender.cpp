#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        if (n == 0) {
            cout << 0 << endl;
            continue;
        }


        ll tm= 0;

        if (x >= y) {

           tm = (n + y - 1) / y;
        } else {



            if (n <= x) {

               tm = 1;
            } else {

                n -= x;
               tm = 1;


              tm+= (n + x - 1) / x;
            }
        }

        cout << tm << endl;
    }

    return 0;
}
