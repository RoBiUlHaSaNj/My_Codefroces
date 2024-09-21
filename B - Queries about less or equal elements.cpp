
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;



        cin >> a >> b;
        vector<int> v1(a);
        vector<int> v2(b);

        for (int i = 0; i < a; i++) cin >> v1[i];
        for (int j = 0; j < b; j++) cin >> v2[j];

        sort(v1.begin(), v1.end());
        vector<int> c;

        for (int j = 0; j < b; j++) {
            int l = 0, r = a - 1;
            int pos = -1;  

            while (l <= r) {
                int mid = l + (r - l) / 2;

                if (v1[mid] <= v2[j]) {
                    pos = mid;  
                    l = mid + 1; 
                } else {
                    r = mid - 1; 
                }
            }
//int pos = upper_bound(a.begin(), a.end(), b[j]) - a.begin();
            c.push_back(pos + 1); 
        }

        for (int v : c) cout << v << " ";
        cout << endl; 


    return 0;
}

