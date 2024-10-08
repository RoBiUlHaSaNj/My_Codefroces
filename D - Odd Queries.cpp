#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> arr(n + 1); 
        vector<long long> prefix(n + 1); 

        
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            prefix[i] = prefix[i - 1] + arr[i];
        }

        while (q--) {
            int a, b;
            long long k;
            cin >> a >> b >> k;


            long long sum = prefix[n];

           
            sum -= (prefix[b] - prefix[a - 1]); 
            sum += (b - a + 1LL) * k; 

            
            if (sum % 2LL == 1LL)
                cout << "YES" << endl; 
            else
                cout << "NO" << endl; 
        }
    }

    
}
