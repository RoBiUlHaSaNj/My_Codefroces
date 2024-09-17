#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

//find 0
    size_t zero_pos = s.find('0');
//if 0
    if (zero_pos != string::npos) {

        s.erase(zero_pos, 1);
    } else {
//if no 0 
        size_t one_pos = s.find('1');
        if (one_pos != string::npos) {
            s.erase(one_pos, 1);
        }
    }


    cout << s << endl;

    return 0;
}
