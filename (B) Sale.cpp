
#include <bits/stdc++.h>
using namespace std;
//find nagative min value range with k

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }


    vector<int> n_price;
    for (int i = 0; i < n; i++) {
        if (price[i] < 0) {
            n_price.push_back(price[i]);
        }
    }


    sort(n_price.begin(), n_price.end());


    int max_e= 0;
    for (int i = 0; i<m && i <n_price.size(); i++) {
        max_e += -n_price[i];
    }


    cout << max_e << endl;

    return 0;
}
