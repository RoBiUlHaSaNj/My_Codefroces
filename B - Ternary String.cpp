#include <bits/stdc++.h>

using namespace std;





int main() {
    int t;
    cin >> t;
    
    while (t--) {
        char s[200001];
        cin >> s;
        
        int count[4] = {0}; 
        int l = 0, m = 200001; 
        int n = strlen(s);
        
        
        for (int r = 0; r < n; r++) {
            count[s[r] - '0']++;
            
          
            while (count[1] > 0 && count[2] > 0 && count[3] > 0) {
               
                m = min(m, r - l + 1);
                
                
                count[s[l] - '0']--;
                l++;
            }
        }
        
       
        if (m == 200001) {
            cout << "0\n";
        } else {
            cout << m<< "\n"; 
        }
    }
    
    return 0;
}
