#include <bits/stdc++.h>
using namespace std;
#define int long long
void divisor(int n)

{

    vector<int>div;
    set<int>arr;
    for(int i=1;i*i<=n;i++)
    {

        if(n%i==0) {
        arr.insert(i);
   
        arr.insert(n/i);

        
    }
    }

    for(auto i : arr)cout<<i<<endl;
}

int32_t main() {
    int n;
    cin >> n;

    divisor(n);

}

