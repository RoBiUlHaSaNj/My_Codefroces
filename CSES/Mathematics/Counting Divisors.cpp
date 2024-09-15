#include <bits/stdc++.h>
using namespace std;
 
const int MAX_X = 1e6 + 1;
vector<int> divisor_count(MAX_X, 0);
 
void precompute_divisors() {
    
    for (int i = 1; i < MAX_X; i++) {
      
        for (int j = i; j < MAX_X; j += i) {
            divisor_count[j]++;
        }
    }
}
 
int main() {
    int n;
    cin >> n;  
    
 
    precompute_divisors();
    
   
    while (n--) {
        int x;
        cin >> x;
 
        cout << divisor_count[x] << endl;
    }
 
    return 0;
}
