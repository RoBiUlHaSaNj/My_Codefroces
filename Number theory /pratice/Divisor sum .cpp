#include <bits/stdc++.h>
using namespace std;

const long long MAX_N = 500000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    vector<long long > divSum(MAX_N + 1, 0);  


    for (long long i = 1; i <= MAX_N; i++) {
        for (long long j = 2 * i; j <= MAX_N; j += i) {
            divSum[j] += i;
        }
    }

    
    int t;
    cin >> t;  

    while (t--) {
        long long  n;
        cin >> n; 
        cout << divSum[n] << '\n'; 
    }

    return 0;
}
