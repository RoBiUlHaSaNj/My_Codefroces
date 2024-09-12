#include <bits/stdc++.h>

using namespace std;

int main () {
  
    int n, x, y, a;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    x = a = v[n-1];
    for(int i = n-2; i >= 0; i--) {
            //v[i] not equal  to  a , and also   x is not divisible by v[i] zero 
        if((v[i] != a && x % v[i]) || (v[i] == a)) {
            y = v[i];
            break;
        }
        a = v[i];
    }
    cout << x << " " << y;
    return 0;
}
