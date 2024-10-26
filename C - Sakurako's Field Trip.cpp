#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

const int N = 2e5 + 5;

#define nl '\n'
#define ff first
#define ss second
#define szof(x) (int)x.size()
#define all(x) x.begin(), x.end()

int n, m;
int arr[N];

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
  //int count = 0;
    while (tt--) {
        cin >> n;

        for (int i = 1; i <= n; i++) cin >> arr[i];

        for (int i = 2; i <= n / 2; i++) {
            
            bool isSame = (arr[i] == arr[i - 1]);
            
            
            bool isEqual = (arr[n - i + 1] == arr[n - i + 2]);



            if (isSame || isEqual) swap(arr[i], arr[n - i + 1]);
        }
      int ans=0;
   
   
   

        for (int i = 1; i < n; i++) {
         // if (arr[i] == arr[i - 1]) ans++;
            if (arr[i] == arr[i + 1]) ans++;
            
        }

        cout << ans << nl;
    }


}
