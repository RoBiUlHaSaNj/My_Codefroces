
#include <bits/stdc++.h>
using namespace std;

#define int long long


//Use & when checking or extracting specific bits.
//Use | when setting or combining bits.
//Use ^ for toggling, finding unique elements, or working with opposite signs
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a ,b;cin>>a>>b;
    int ans_and =a&b;
    int ans_or=a|b;
    int ans_xor=a^b;
    cout<<ans_and<<endl<<ans_or<<endl<<ans_xor<<endl;

}

