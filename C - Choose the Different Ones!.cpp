#include <bits/stdc++.h>
using namespace std;



//6 5 6
//2 3 8 5 6 5
//1 3 4 10 5

//2 3 5 5 6 8 k=3 (2 3 5 5 6) 2 5 6
//1 3 4 5 10  k=3 (1 3 4 5 )1 3 4



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        int half_k = k / 2;

        unordered_set<int> setA, setB;


        for (int i = 0; i < n; i++) {
            if (a[i] <= k) setA.insert(a[i]);
        }
        for (int i = 0; i < m; i++) {
            if (b[i] <= k) setB.insert(b[i]);
        }


        int onlyInA = 0, onlyInB = 0, inBoth = 0;
        for (int i = 1; i <= k; i++) {
            bool inA = setA.count(i);
            bool inB = setB.count(i);

            if (inA && inB) inBoth++;
            else if (inA) onlyInA++;
            else if (inB) onlyInB++;
        }


        if (onlyInA > half_k || onlyInB > half_k || (onlyInA + onlyInB + inBoth) < k) cout << "NO" << endl;
         else cout << "YES" << endl;

    }

}
