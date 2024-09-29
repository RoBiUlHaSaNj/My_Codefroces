#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> m(k);
        for (int i = 0; i < k; ++i) {
            cin >> m[i];
        }

//sort
        sort(m.begin(), m.end(), greater<int>());

        int cat = 0;
        int mice = 0;
//cheek position 

        for (int i = 0; i < k; ++i) {
            if (m[i] > cat) {
                mice++;
                cat+= (n - m[i]);
            } else {
                break;
            }
        }

        cout <<mice << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();  

}
