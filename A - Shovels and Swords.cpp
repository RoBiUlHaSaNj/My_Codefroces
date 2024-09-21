#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        int total = 0;  

        
        if (a == 0 || b == 0) {
            cout << "0" << '\n';
            continue;
        }

       
        if (a <= 2 * b && b <= 2 * a) {
            total = (a + b) / 3; 
        } else {
          
            if (a > 2 * b) {
                total = b;
            }
          
            else if (b > 2 * a) {
                total = a;
            }
        }

      
        cout << total << '\n';
    }

    return 0;
}
