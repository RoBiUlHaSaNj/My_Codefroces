#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    int maxa= 0;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> v1(m);
    for (int i = 0; i < m; ++i) {
        cin >> v1[i];
    }

    int r = 0;
    for (int c : v) {

         //auto it = lower_bound(v1.begin(), v1.end(), city);
     //if (it != v1.end()) {
            //max_distance = max(max_distance, abs(*it - city));
        //}
        // if (it != v1.begin()) {
          //  it--;
           // maxa = max(maxa, abs(*it - city));
        while (r < m - 1 && abs(v1[r] - c) >= abs(v1[r + 1] - c)) //ai-aj<r
            {
            r++;
        }

        int d = abs(v1[r] - c);
        maxa = max(maxa, d);
    }

    cout << maxa<< endl;  

    return 0;
}
