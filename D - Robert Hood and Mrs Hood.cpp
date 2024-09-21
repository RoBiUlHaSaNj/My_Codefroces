#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while (t--) {
        ll n, d, k;
        cin >> n >> d >> k;

        vector<ll> start(n + 1, 0);
        vector<ll> end(n + 1, 0);

        ll l, r;
        while (k--) {
            cin >> l >> r;
            start[l]++;
            end[r]++;
        }

       ll c = 0, m1 = 0, b1 = 0;
        ll m= 1, b= 1;


        for (int i = 1; i <= d; i++) {
            c += start[i];
        }

        m1 = b1 = c;


        for (int i = 2; i <= n - d + 1; i++) {
            c += start[i + d - 1];
           //current
            c -= end[i - 1];

            if (c > b1) {
               //update max

                b1= c;
                b = i;
                //cout<<c;
            }
            if (c < m1) {
                //update mini
                m1= c;  
                m = i;
               // cout<<c;
            }
        }

        cout << b << " " << m << endl;
    }
}
