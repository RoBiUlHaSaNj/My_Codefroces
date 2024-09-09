#include<bits/stdc++.h>
using namespace std;



int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int c1 = n * a;


    int c2= ((n + m - 1) / m) * b;

    int c3 = (n / m) * b + (n % m) * a;


    int result = min({c1, c2, c3});

    cout << result << endl;
    return 0;
}
