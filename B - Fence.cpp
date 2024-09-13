


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
/*
subarray sum 
1 2 6 1 1 7 1
1 2 6 = 9
2 6 1 = 9
6 1 1  =8
1 1 7  =9
1 7 1 =9*/

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    int min_sum = sum;
    int min_index = 0;

    //window from start to end of the array
    for (int i = k; i < n; i++) {
     sum = sum - a[i - k] + a[i]; // Update the sum by sliding the window
        if (sum < min_sum) {
            min_sum =sum;
            min_index = i - k + 1;
        }
    }

   // cout << min_sum << endl;
    cout  << min_index + 1 << endl;

    return 0;
}



