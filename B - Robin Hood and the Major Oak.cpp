#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main() {
    int t;
    cin >> t;
    while (t--) {
       ll n, k;
        cin >> n >> k;




      ll ts= (n * (n + 1)) / 2;
       ll lrem = (n - k) * (n - k + 1) / 2;

        ll ans = ts - lrem;


        if (ans% 2 == 0)cout << "YES" << '\n';
         else  cout << "NO" << '\n';


        //if(ans==1)cout<<"NO"<<'\n';
    }

}


