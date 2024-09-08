
//search odd an even count than cheek if count is 1 time even or odd  print this index .
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> num(n);
    int even_count = 0, odd_count = 0;
    vector<int> even, odd;

    for (int i = 0; i < n; ++i) {
        cin >> num[i];
        if (num[i] % 2 == 0) {
            even_count++;
            even.push_back(i + 1); 
        } else {
            odd_count++;
            odd.push_back(i + 1); 
        }
    }

  
    if (even_count > 1) {
       
        cout << odd[0] << endl;
    } else {
       
        cout << even[0] << endl;
    }

    return 0;
}
