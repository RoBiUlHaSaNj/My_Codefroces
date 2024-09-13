#include <bits/stdc++.h>

using namespace std;


int main()
{
   int t;
   cin>>t;
    //map<long long,long long >count; //just  cheek for  match value
   while(t--)
   {
    map<long long,long long >count;//store (a[i] - i)
     //  int a;
       long long n ,x;
       cin>>n;
       for(long long i=1;i<=n;i++)
        {
        cin>>x;
        x-=i  ;   //value-x;
        count[x]++;

       }

       long long  ans =0;
       for(auto it :count){
            long  long a=it.second;
       ans+=a*(a-1)/2;//pair formula (n*(n-1))/2

       }
       cout<<ans<<endl;
   }
    return 0;
}
