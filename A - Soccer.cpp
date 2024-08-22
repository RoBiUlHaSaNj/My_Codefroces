#include<bits/stdc++.h>
 
 
using namespace std;
 
bool Soccer(long long a, long long b, long long c, long long d) {
    long long diff1 = a - b;
    long long diff2 = c - d;
 
    return diff1 != 0 && diff2 != 0 && ((diff1 > 0 && diff2 > 0) || (diff1 < 0 && diff2 < 0));
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (Soccer(a, b, c, d) ? "YES" : "NO") << endl;
    }
 
    return 0;
}
