#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int l = 0;
    long long ans = 0;
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += v[i];
        while (sum >= s) {
            //ans = min(ans, i - l + 1);

            sum -= v[l++];
//cout<<ans<<endl;
//cout<<sum<<endl


        }
        ans+=l;
    }

    //if (ans > n) {
       // ans = -1;
  //  }

    cout << ans  << endl;
    return 0;
}
