#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
int q,m;
    int sum = a;
    while (a >= b) {
       q = a / b;
        sum += q;
        m =a%b;
        a = m+q;
    }



    cout << sum << endl;
    return 0;
}
