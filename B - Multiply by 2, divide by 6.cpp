
#include <bits/stdc++.h>

using namespace std;

int min_moves_to_one(int n) {
    int count2 = 0, count3 = 0;


    while (n % 2 == 0) {
        n /= 2;
        count2++;
    }


    while (n % 3 == 0) {
        n /= 3;
        count3++;
    }


    if (n != 1) return -1;


    if (count3 < count2) return -1;


    return (count3 - count2) + count3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << min_moves_to_one(n) << endl;
    }
    return 0;
}
