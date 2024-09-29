#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
     int r = n - 1;


    
     //  leftmost not sorted
    while (l < n - 1 && a[l] <= a[l + 1]) {
        l++;
    }
    
     if (l == n - 1) {
        cout << "yes\n1 1\n";
        return 0;
    }



    //  rightmost  not sorted

    while (r > 0 && a[r] >= a[r - 1]) {
        r--;
    }


    int start = l, end = r;

    while (l < r) {
        swap(a[l], a[r]);
        l++;
        r--;
    }


    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }


    if (sorted) {
        cout << "yes\n" << start + 1 << " " << end + 1 << endl;
    } else {
        cout << "no\n";
    }


}
