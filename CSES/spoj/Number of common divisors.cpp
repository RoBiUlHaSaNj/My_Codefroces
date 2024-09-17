#include <bits/stdc++.h>
using namespace std;
 
 
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;  
            if (i != n / i) {
                count++;  
            }
        }
    }
    return count;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int T;
    cin >> T; 
 
    while (T--) {
        int A, B;
        cin >> A >> B;
 
       
        int gcdValue = __gcd(A, B);
 
       
        cout << countDivisors(gcdValue) << '\n';
    }
 
    return 0;
}
 
 
