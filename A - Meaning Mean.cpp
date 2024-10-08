#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int>a(n) ;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(), a.end());
        int ans = a[0];
        for(int i = 1 ; i < n ; i++) ans = (ans + a[i]) / 2;
        cout << ans << endl;
    }
  
}
