#include <bits/stdc++.h>
https://www.spoj.com/problems/DIVCNTK/
https://www.spoj.com/problems/DIVCNT3/
using namespace std;


int num_divisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += 2;
        }
        if (i * i == n) {
            count--;
        }
    }
    return count;
}


long long sum_of_num_divisors(int n) {
    long long result = 0;
    for (int i = 1; i <= n; i++) {
        result += num_divisors(i);
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << sum_of_num_divisors(n) << endl;
    }

    return 0;
}


using namespace std;

typedef unsigned long long ull;

// Function to calculate the number of divisors of an integer
ull num_divisors(ull n) {
    ull count = 0;
    for (ull i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += 2;
        }
        if (i * i == n) {
            count--;
        }
    }
    return count;
}

// Function to calculate Sk(n) efficiently
ull Sk(ull n, ull k) {
    ull result = 0;
    for (ull i = 1; i <= n; i++) {
        result += num_divisors(ull(pow(i, k))); 
        result %= (1ULL << 64); // Modulo 2^64
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ull n, k;
        cin >> n >> k;
        cout << Sk(n, k) << endl;
    }

    return 0;
}
