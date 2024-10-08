
#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n, k;
    cin >> n >> k;
    long long ans = 0;


    if (k == 1) {
        cout << n << '\n';
        return;
    }


    while (n > 0) {
    //int ans = log(n) / log(k);
       // n -= pow(k, ans);
        //count++;
            
        ans += n % k; 
        n /= k;       
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
   
}
