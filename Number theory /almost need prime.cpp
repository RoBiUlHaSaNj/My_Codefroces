
#include <bits/stdc++.h>
using namespace std;
//to dp
//1.cheek is  it prime
//2.find range  prime
//3.conditional prime
//4.next greater prime by n if n =10 output 11
//5.small prime by n if n = 10 output 7
//6.next  kth positon prime if n =10 k= 3  output  17
//7.Not prime
// to  cheek it is prime or  not
//lower than 1 always false
//2 ,3 always true
//if 2 ,3 divisble by n than  false
//loop i =5 i*i<=n i+=6
//n%i==0 n%(i+2)==0 false
//otherwise return true

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to perform the Sieve of Eratosthenes
void SieveOfEratosthenes(int n, int k) {
    // Create a boolean array to mark prime numbers
    vector<bool> prime(n + 10000, true);

    // 0 and 1 are not prime numbers
    prime[0] = prime[1] = false;

    // Perform the sieve to mark non-prime numbers
    for (int p = 2; p * p <= n+10000; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n+10000; i += p) {
                prime[i] = false;
            }
        }
    }

    // Collect all primes smaller than n into a vector
    vector<int> primes;
    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }

    // Check if k is within bounds
    if (k > 0 && k <= primes.size()) {
        cout << "The " << k << "-th prime smaller than " << n << " is: " << primes[k - 1] << endl;
    } else {
        cout << "There are less than " << k << " primes smaller than " << n << endl;
    }

     //1 to n
    for (int p = 2; p <= n; p++)
       if (prime[p])
            cout << p << " ";cout<<endl;




        for (int i = n + 1; ; i++) {
        if (prime[i]) {
            cout << "The next prime greater than " << n << " is: " << i << endl;
            break;



}

            }

        for (int i = n - 1; i >= 2; i--) {
        if (prime[i]) {
            cout << "The largest prime smaller than " << n << " is: " << i << endl;
            return;
        }
    }

}



void notPrime(int n) {

    vector<bool> prime(n + 1, false);
    prime[0] = prime[1] = true;

    for (int i = 2; i * i <= n; ++i) {
        if (!prime[i]) {  // If i is prime
            for (int j = i * i; j <= n; j += i) {
                prime[j] = true;
            }
        }
    }

    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            cout << p << " ";
        }
    }
    cout << endl;
}

// Function to perform the Sieve of Eratosthenes
vector<bool> SieveOfEratostheness(int limit) {
    vector<bool> prime(limit + 1, true);
    prime[0] = prime[1] = false;  // 0 and 1 are not prime numbers

    // Perform the sieve to mark non-prime numbers
    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                prime[i] = false;
            }
        }
    }

    return prime;
}

// Function to find the k-th prime greater than n
int findKthPrimeGreaterThanN(int n, int k) {
    // Set an initial reasonable limit (n + 1000) to look for primes
    int limit = n + 1000;

    // Get the sieve of primes up to 'limit'
    vector<bool> sieve = SieveOfEratostheness(limit);

    // Now, look for primes greater than n
    int count = 0;
    for (int i = n + 1; i <= limit; ++i) {
        if (sieve[i]) {
            count++;
            if (count == k) {
                return i;
            }
        }
    }

    return -1; // If no k-th prime is found (should not happen with a reasonable limit)
}

int main() {
    int n,k;
    cin >> n>>k;
    //part1
    if (isPrime(n)) cout << n << " is prime" << endl;
     else cout << n << " is not prime" << endl;

    //part2
    SieveOfEratosthenes(n,k);
   // part3
   notPrime(n);


    return 0;
}
