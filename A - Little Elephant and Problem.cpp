
#include<bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
  /*  for(int i =0;i<sorted_a.size();i++)
    {

        cout<<sorted_a[i];
    }*/

    int diff_count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted_a[i]) {
            diff_count++;
        }
    }


    if (diff_count == 0 || diff_count == 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;}
