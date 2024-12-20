
#include <bits/stdc++.h>
using namespace std;

const int maxn =1000000;

vector<int>divcnt(maxn+1,0);
void store_divisor()
{
    for(int i =1;i<=maxn;i++)
    {
        for(int j=i;j<=maxn;j+=i)
        {
           divcnt[j]++;
        }
    }
}
/*
int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}*/
int main() {
       ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
  store_divisor();
    while(t--)
    {
        int a,b;cin>>a>>b;
        int g=__gcd(a,b);
      //  cout<<g<<endl;
        cout<<divcnt[g]<< "\n" ;

    }

}
