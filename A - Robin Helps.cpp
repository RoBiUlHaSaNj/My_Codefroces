#include<bits/stdc++.h>
using namespace std;


#define ll long long



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;

        int f = 0;
        int count = 0;

        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];


        for (int i = 0; i < n; i++) {
            if (arr[i] >= k) {

               f+= arr[i];
            } else if (arr[i] == 0 && f > 0) {

                count++;
                f--;
            }
        }

        cout << count << '\n';
    }


}
