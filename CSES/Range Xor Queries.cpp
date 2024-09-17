#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    
    vector<int> arr(n + 1);
    vector<int> prefixXOR(n + 1, 0);
    
   
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        prefixXOR[i] = prefixXOR[i - 1] ^ arr[i];
    }
    
 
    while (q--) {
        int a, b;
        cin >> a >> b;
        // Calculate XOR in the range [a, b]
        int result = prefixXOR[b] ^ prefixXOR[a - 1];
        cout << result << "\n";
    }
    
    return 0;
}
