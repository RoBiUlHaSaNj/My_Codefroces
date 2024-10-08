#include <bits/stdc++.h>
using namespace std;

using ll = long long;



int main() {
    string s;
    cin >> s;

    stack<int> st;
    st.push(-1);

    int max_len = 0;
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();

            if (!st.empty()) {
                int current_len = i - st.top();
                if (current_len > max_len) {
                    max_len = current_len;
                    count = 1;
                } else if (current_len == max_len) {
                    count++;
                }
            } else {
                st.push(i);
            }
        }
    }

    if (max_len == 0) {
        cout << "0 1" << endl;
    } else {
        cout << max_len << " " << count << endl;
    }


}
