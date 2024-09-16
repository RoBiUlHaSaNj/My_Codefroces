#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string vowels = "aeiou";
        string result; 

        for (int i = 0; i < 5; i++) {
            int x = n / (5 - i);
            result += std::string(x, vowels[i]); 
            n -= x;
        }

        cout << result << endl; 
    }

    return 0;
}
