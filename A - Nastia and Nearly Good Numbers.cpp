
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout << "YES\n";
           // a*b*2
            //6*4 =24*2 =48
            //48-6=42

            ll sum = (a * b * 2);
            //x+y=z
            ll y = sum - a;
            
           //cout <<a-1 << a*b-a << a-b
            cout<<a<<" "<<y<<" "<<sum<<"\n";
        }
    }
}
