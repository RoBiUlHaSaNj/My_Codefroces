
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
int arr[1000500];
int prefixFreq[1000500];
int suffixFreq[1000500];
//#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> mst;
    int n;
    cin >> n;
    vector<int> arr(n);


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    //unordered_map<int, int> prefixCount, suffixCount;
    //vector<int> prefixFreq(n), suffixFreq(n);
    map <int ,int>prefixCount;
    map<int ,int>suffixCount;



    for (int i = 0; i < n; i++) {
        prefixCount[arr[i]]++;
        prefixFreq[i] = prefixCount[arr[i]];
    }


    for (int i = n ; i >= 0; i--) {
        suffixCount[arr[i]]++;
        suffixFreq[i] = suffixCount[arr[i]];
           mst.insert(suffixFreq[i]);
    }


   // ordered_set mst;
    //for (int i = n - 1; i >= 0; i--) {
       // mst.insert(suffixFreq[i]);
   // }

    long long ans = 0;


    for (int i = 0; i < n - 1; i++) {
auto it = mst.upper_bound(suffixFreq[i]);
        mst.erase(it);
  // cout<<ans<<"/n";

        ans += max((int)0, (int) mst.order_of_key(prefixFreq[i]) - 1);
    }

    cout << ans << "\n";


}
