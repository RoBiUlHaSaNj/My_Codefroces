

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x;
    cin>>n>>x;
    int cnt =0;

    for( int i =1; i<= n ; i++)
    {
        if ( x/i <= n && x % i == 0 )  cnt++;
       
       
    }
    cout<<cnt<<endl;
    
}
