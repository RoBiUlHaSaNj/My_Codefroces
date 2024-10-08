#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;


    bool abF= false, baF = false;


    for (int i = 0; i < s.size() - 1; i++) {
        if (!abF && s.substr(i, 2) == "AB") {
            abF = true;
            i++;
        } else if (abF && s.substr(i, 2) == "BA") {
            baF = true;
            break;
        }
    }


    if (abF && baF) {
        cout << "YES" << endl;
        return 0;
    }


    abF = false;
    baF = false;


    for (int i = 0; i < s.size() - 1; i++) {
        if (!baF && s.substr(i, 2) == "BA") {
            baF = true;
            i++;
        } else if (baF && s.substr(i, 2) == "AB") {
            abF = true;
            break;
        }
    }


    if (abF && baF) {
        cout << "YES" << endl;
    } else {

        cout << "NO" << endl;
    }

    return 0;
}
