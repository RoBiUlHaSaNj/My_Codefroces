#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t;  
    cin >> t;
/*
    n-2 2 b
    n(n-1)/2
    5 2
    5-2 =3
    3 aaa
    2 bb
    aaabb-k=1
    aabab-k=2=ans;
    
    */
    
    
    while(t--) {
        int n, k;
        cin >> n >> k;

        string ans(n, 'a');  

        for(int i = n - 2; i >= 0; i--) {
            if(k <= (n - i - 1)) {
                ans[i] = 'b';     
                ans[n - k] = 'b';  
                break;
            }
            k -= (n - i - 1);  
        }

        cout << ans << endl;  
    }

}
