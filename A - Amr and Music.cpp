#include <bits/stdc++.h>
using namespace std;
/*test case 1
4 10
4 3 1 2
output
4
1 2 3 4
test case 2

5 6
4 3 1 1 2
1=4
2=3
3=1
4=1
5=2

pick max 1 1 2  //  2 1 3
 3 4 5 // 5 4 2 //
3
1 3 4(maximam possible)


test case 3
1 3
4
0

*/
int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a(n);


    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int sum = 0, count = 0;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        if (sum + a[i].first <= k) {
            sum += a[i].first;
            ans.push_back(a[i].second);
            count++;
        } else {
            break;
        }
    }


    cout << count << endl;


    for (int i = 0; i < count; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
