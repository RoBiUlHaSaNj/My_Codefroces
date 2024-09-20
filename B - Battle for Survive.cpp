#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
       ll n;
        cin >> n;

        vector<int> arr(n);
        ll tm =0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];



        //sort(arr.begin(), arr.end());
        if(i<n-2)
            tm+=arr[i];
        }

  ll ans =  arr[n-1]-arr[n-2]+tm ;
        cout << ans<< "\n";
    }

    return 0;
}
