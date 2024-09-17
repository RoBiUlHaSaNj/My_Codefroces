#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0;i<n;i++)
#define fon(n,i) for(int i=n-1;i>=0;i--)
#define ll long long
#define vpll vector<pair<long long , long long>>
#define fo1(i,n) for(int i=1;i<=n;i++)
#define forn(n,i) for(int i=n;i>=1;i--)
#define rev(v) reverse(v.begin(),v.end())
#define revr(v) reverse(v.rbegin(),v.rend())
#define pb push_back
#define w(t) \
    int t; cin >> t; \
    while (t--)
#define n '\n'
// const int N = 1e6+1;

long long mn  =1e12 ;
long long  x ;

void lucky(long long a  , int c )
{
    if(a > 1e11) return ;
  //if(c=0 && a!=0)lucky.push_back(a);
    if(a>=x &&  c==0){
        mn = min( mn , a) ;
    }
    lucky( a * 10 + 4 , c+1 );//4
    lucky( a * 10 + 7 , c-1 );//7

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);



    cin>>x;
    lucky(0,0) ;
    cout<<mn;
    return 0;



}
