#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long maxa = 0; 
        int cs = a[0];      

        
        for (int i = 1; i < n; ++i) {
            // positive or negative 
            if ((a[i] > 0 && a[i - 1] < 0) || (a[i] < 0 && a[i - 1] > 0)) {
                maxa += cs;   
                cs = a[i];    
            } else {
         
                cs = max(cs, a[i]);
            }
        }

    
        maxa += cs;

       
        cout << maxa << endl;
    }

}
