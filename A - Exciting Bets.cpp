#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while(T--) {

       long long a, b;
        cin >> a >> b;


        if (a == b) {
            cout << "0 0\n";
        } else {
            long long d = abs(a - b);
            long long u = d - (a % d);
            long long o= a % d;
            cout << d << " " << min(u, o) << "\n";
    }

}
}
