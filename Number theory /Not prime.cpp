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
     for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main() {
    faster;
   cin>>n;
  sieve();


}
