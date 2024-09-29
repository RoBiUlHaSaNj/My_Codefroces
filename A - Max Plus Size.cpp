#include <bits/stdc++.h>
#define nl '\n'
typedef long long int ll;
using namespace std;


vector<int> slove(const vector<pair<int, vector<int>>>& aa) {
    vector<int> ans;


    for (auto& p : aa) {
        int n = p.first;
        const vector<int>& array = p.second;

        int first_max = 0, first_count = 0;
        int sec_max = 0, sec_count = 0;


        for (int i = 0; i < n; i += 2) {
            first_max = max(first_max, array[i]);
            first_count++;
        }

        for (int i = 1; i < n; i += 2) {
            sec_max = max(sec_max, array[i]);
            sec_count++;
        }


        int s1 = first_max + first_count;
        int s2 = sec_max + sec_count;


        ans.push_back(max(s1, s2));
    }

    return ans;
}

int main() {
    int m;
    cin >> m;
    vector<pair<int, vector<int>>> aa;


    for (int i = 0; i < m; i++) {
        int n;
        cin >> n;
        vector<int> array(n);

        for (int j = 0; j < n; j++) {
            cin >> array[j];
        }

        aa.push_back({n, array});
    }

    vector<int> ans = slove(aa);

    for (int i : ans) {
        cout << i << endl;
    }

   
}
