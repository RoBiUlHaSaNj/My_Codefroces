#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

       /*     1 1 1 1 1 4
            1 1 1 1 1 3
            1 1 1 1 1 2
            1 1 1 1 1 1
            1 1 1 1 1(n)
            4 3 2 1

            1 1 1 1 1
            1 1 1 1 1
            1 1 1(n) 1
            1 1 1 1 1
            1 1 1 1 1
            1*8
            2*16
            n+n+(n-2)+(n-2)
            */

        long long mid= n  / 2;//mid
        long long result = 0;

        for (long long i = 1; i <= mid; i++) {
            result += i * i *8;
        }


       // result *= 8;

        cout << result << endl;
    }


}
