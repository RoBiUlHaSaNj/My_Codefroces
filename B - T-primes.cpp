
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const LL maxn = 1000000 + 1000;
bool primes[maxn];

int main(){
    LL n;
    cin>>n;
    primes[1] = true;
    for(LL i = 2 ; i < maxn ; i++)
        if(!primes[i])
            for(LL j = 2 ; j * i < maxn ; j++)
                primes[i  * j] = true;
    for(LL i = 0 ; i < n ; i ++)
    {
        LL a;
        cin>>a;
        LL s = LL(sqrt(double(a)));
        LL s1 = s * s;
        if(s1 == a && !primes[s])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
