

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;  

int main() {
    long long a[MAX_N];
    long long n;
    
    
    cin >> n;
    
 
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    long long max_length = 1;
    long long current_length = 1;
    
    // Find the maximum length of non-decreasing subsegment
    for (int i = 1; i < n; ++i) {
        if (a[i] >= a[i - 1]) {
            current_length++;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }
    
    
    max_length = max(max_length, current_length);
    
   
    cout << max_length << endl;

    return 0;
}
