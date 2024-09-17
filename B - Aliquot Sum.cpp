#include <bits/stdc++.h>
using namespace std;
 
#define MAXN 1000001
#define vi vector<int>
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define w(t) \
    int t; cin >> t; \
    while (t--)
 
 
int aliquot_sum[MAXN];
 
 
void precompute_aliquot_sums() {
  
    fill(aliquot_sum, aliquot_sum + MAXN, 0);
 
 
    for (int i = 1; i < MAXN; ++i) {
        for (int j = i * 2; j < MAXN; j += i) {
            aliquot_sum[j] += i;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    precompute_aliquot_sums();
 
    w(T) {
        int num;
        cin >> num;
 
        int sum = aliquot_sum[num];
        if (sum > num) {
            cout << "abundant\n";
        } else if (sum < num) {
            cout << "deficient\n";
        } else {
            cout << "perfect\n";
        }
    }
 
    return 0;
}
