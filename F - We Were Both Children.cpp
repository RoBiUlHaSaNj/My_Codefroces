#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0;i<n;i++)
#define fon(n,i) for(int i=n-1;i>=0;i--)
#define ll long long
#define vpll vector<pair<long long , long long>>
#define fo1(i,n) for(int i=1;i<=n;i++)
#define forn(n,i) for(int i=n;i>=1;i--)
#define rev(v) reverse(v.begin(),v.end())
#define revr(v) reverse(v.rbegin(),v.rend())
#define pb push_back
#define w(t) \
    int n; cin >> t; \
    while (t--)

// const int N = 1e6+1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n; 

        vi v(n); 
        vi count(n + 1, 0); 

       
        fo(i, n) {
            cin >> v[i];
            if (v[i] <= n) {
                count[v[i]]++;
            }
        }

        
        vi numFrogs(n + 1, 0);
        fo1(i, n) {
            for (int j = i; j <= n; j += i) {
                numFrogs[j] += count[i];
            }
        }


        cout << *max_element(numFrogs.begin() + 1, numFrogs.end()) << '\n';
    }

    return 0;
}
