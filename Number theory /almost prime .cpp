problem link https://vjudge.net/problem/UVA-10539#google_vignette
#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int prime[3001];
int n =3000;//for l and r
//int n;

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
//10
//4 6 8 10



int countAlmostPrimes(int num) {

if(prime[num]==0) return false;//cheek for prime
    int distinctPrime = 0;
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0 && prime[i] == 0) {
            distinctPrime++;
        while (num % i == 0) {
               num /= i;
            }
        }
        }
   return distinctPrime == 1;


    }


//}

int main() {
    faster;
   // n=10;
   int t;cin>>t;//10
  sieve();
 int Cnt = 0;
while(t--)
{

int l ,r ;cin>>l>>r;

    for (int i = l; i <= r; ++i) {
     if (countAlmostPrimes(i)) {
           Cnt++;
       }
   }

   cout << Cnt << '\n';
}

}
