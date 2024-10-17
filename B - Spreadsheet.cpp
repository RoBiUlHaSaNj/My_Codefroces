#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


string In;
int ans;


void num_to_str(int num) {
    if (num) {
        num_to_str((num - 1) / 26);
        In += ('A' + (num - 1) % 26);
    }
}


void str_to_num(string s) {
    for (int i = 0; i < s.size(); i++) {
        ans = ans * 26 + s[i] - 'A' + 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        In = "";
        ans = 0;
        string s;
        cin >> s;

        vector<string> a1;
        vector<string> a2;


        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                string s1;
                while (i < s.size() && s[i] >= 'A' && s[i] <= 'Z') {
                    s1 += s[i];
                    i++;
                }
                a1.push_back(s1);
                i--;
            } else if (s[i] >= '0' && s[i] <= '9') {
                string s1;
                while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                    s1 += s[i];
                    i++;
                }
                a2.push_back(s1);
                i--;
            }
        }


        if (a1.size() > 1 && a2.size() > 1) {
            string result1 = a2[0];  // Row
            string result2 = a2[1];  // Col
            int X = stoi(result2);
            num_to_str(X);
            cout << In << result1 << endl;

        } else {
            string result1 = a1[0];//Col
            string result2 = a2[0];//Row
            str_to_num(result1);
            cout << 'R' << result2 << 'C' << ans << endl;
        }
    }

}
