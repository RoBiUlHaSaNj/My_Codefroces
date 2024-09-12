#include <bits/stdc++.h>

using namespace std;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
       long long  a, b;
        cin >> a >> b;
        
     
        if (b % a == 0) {
          
            cout << (b * b) / a << endl;
        } else {

            cout << (a * b) / gcd(a, b) << endl;
        }
    }
    
    return 0;
}
