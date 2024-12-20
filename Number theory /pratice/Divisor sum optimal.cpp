
#include <bits/stdc++.h>

using namespace std;

const int LIMIT = 100000000;  
vector<int> primes;  

// Function to perform the sieve of Eratosthenes
void sieve() {
    vector<bool> isPrime(LIMIT + 1, true);  // Boolean array to track primes
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not primes

    for (int i = 2; i <= LIMIT; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);  // Store prime number
            for (int j = i * 2; j <= LIMIT; j += i) {
                isPrime[j] = false;  // Mark multiples of i as non-prime
            }
        }
    }
}

// Function to calculate the sum of proper divisors of n
long long solution(long long n) {
    long long original = n, ans = 1;
    int i;

    // Loop through the primes list to find divisors
    for (i = 0; i < primes.size() && (long long)primes[i] * primes[i] <= n; ++i) {
        int count = 0;
        long long sum = 1, pw = 1;

        // While prime[i] is a divisor of n, calculate the sum of divisors
        while (n % primes[i] == 0) {
            pw *= primes[i];
            sum += pw;
            count++;
            n /= primes[i];
        }

        if (count > 0) ans *= sum;  // Multiply the sum of divisors for this prime
    }

    // If n is still greater than 1, it means n is prime
    if (n > 1) ans *= n + 1;

    return ans-original;  // Return the sum of proper divisors (total divisors - n)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    sieve();  // Precompute primes up to LIMIT

    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        long long n;
        cin >> n;  // Read each test case
        cout << solution(n) << endl;  // Output the sum of proper divisors
    }

    return 0;
}
