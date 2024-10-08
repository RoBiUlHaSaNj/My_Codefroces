#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
int main() {
    fast;
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    vector<long long> prefix(n + 1);


    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }

    vector<int> sortedArr(arr.begin() + 1, arr.end());
    sort(sortedArr.begin(), sortedArr.end());

    vector<long long> sortedPrefix(n + 1);
    for (int i = 1; i <= n; i++) {
        sortedPrefix[i] = sortedPrefix[i - 1] + sortedArr[i - 1];
    }


    int q;
    cin >> q;
    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {

            long long sum = prefix[r] - prefix[l - 1];
            cout << sum << endl;
        } else {

            long long sortedSum = sortedPrefix[r] - sortedPrefix[l - 1];
            cout << sortedSum << endl;
        }
    }


}
