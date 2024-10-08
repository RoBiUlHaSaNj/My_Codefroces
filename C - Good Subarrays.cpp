#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<int, int> prefix_count;
        long long prefix_sum = 0;
        long long countg = 0;


        prefix_count[0] = 1;

        for (int i = 0; i < n; ++i) {

            prefix_sum += (s[i] - '0');


            int a_prefix = prefix_sum - (i + 1);


            countg += prefix_count[a_prefix];


            prefix_count[a_prefix]++;
        }

        cout << countg << endl;
    }


}
