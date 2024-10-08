
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oset;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &i : a) {
        cin >> i;
    }

    oset lS;
    oset rS;

    for (int i = 0; i < n; i++) {
        rS.insert(a[i]);
    }

    long long count = 0;

    for (int j = 0; j < n; j++) {

        rS.erase(a[j]);

        long long lC = lS.size() - lS.order_of_key(a[j]);

        long long rC = rS.order_of_key(a[j]);


        count += (lC * rC);


        lS.insert(a[j]);
    }

    cout << count << endl;


}
