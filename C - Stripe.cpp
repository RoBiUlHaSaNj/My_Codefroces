#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> V;
    for(auto i=0;i<n;++i)
    {
        int Val;
        cin>>Val;
        V.push_back(Val);
    }
    vector<int> Prefix(n + 1,0);
    for(auto i=1;i<=n;++i)
    {
        Prefix[i] = Prefix[i-1] + V[i-1];
    }
    int Ans = 0;
    for(auto i=1;i<n;++i)
    {
        int Val1 = Prefix[i];
        int Val2 = Prefix[n] - Prefix[i];
        if(Val1 == Val2)
            Ans += 1;
    }
    cout<<Ans<<endl;

}






