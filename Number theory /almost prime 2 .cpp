problem link https://codeforces.com/contest/26/problem/A
#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int prime[3001];
int n ;


void sieve() {
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }
}

int countAlmostPrimes(int num) {
    int distinctPrime = 0;
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0 && prime[i] == 0) {
            distinctPrime++;
            while (num % i == 0) {
                num /= i;
            }
        }
    }
    return distinctPrime == 2;



}

int main() {
    faster;
   cin>>n;
    sieve();

    int Cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (countAlmostPrimes(i)) {
            Cnt++;
        }
    }

    cout << Cnt << '\n';


}
