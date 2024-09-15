#include<bits/stdc++.h>
using namespace std;

const int MAX_X = 1000000;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    vector<int> freq(MAX_X + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }


    for (int g = MAX_X; g >= 1; g--) {
        int count = 0;


        for (int m = g; m <= MAX_X; m += g) {
            count += freq[m];
        }

        // If more than one number is divisible by g, it is the maximum GCD
        if (count > 1) {
            cout << g << endl;
            return 0;
        }
    }

    return 0;
}

