
#include<bits/stdc++.h>
using namespace std;
The single input line contains the single integer N, where N is chosen as a dividend (1 ≤ N ≤
10e18).
map<long long, int> prime_factorization(long long n) {
    map<long long, int> factors;
    for (long long i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        factors[n] = 1;
    }
    return factors;
}


bool is_prime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}


bool is_square_of_prime(long long n) {
    long long root = sqrt(n);
    return root * root == n && is_prime(root);
}

// Function to count divisors
long long count_divisors(long long n) {
    auto factors = prime_factorization(n);
    long long divisor_count = 1;
    long long reduced_n = n;

    for (auto &[p, count] : factors) {
        divisor_count *= (count + 1);
        reduced_n /= pow(p, count);
    }


    if (reduced_n == 1) {
        return divisor_count;
    } else if (is_prime(reduced_n)) {
        return divisor_count * 2;
    } else if (is_square_of_prime(reduced_n)) {
        return divisor_count * 3;
    } else {
        return divisor_count * 4;
    }
}

int main() {
    long long N;
    cin >> N;

    cout << count_divisors(N) << endl;
    return 0;
}
