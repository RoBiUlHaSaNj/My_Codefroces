#include <bits/stdc++.h>
#define intt long long
using namespace std;

/*
a  individual
b both
x=y=0;


*/
int main()

{
    intt a ,b,x,y;
   intt t;
   cin>>t;
   while(t--){

    cin>>a>>b>>x>>y;
    intt ans =0;
    intt m =min(a,b);
    if(2*x>y)a-=m,b-=m,ans=m*y;


    ans+=(a+b)*x;
    cout<<ans<<endl;;

   }
}
