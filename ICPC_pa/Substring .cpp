//just compiar string size mismatch

#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

const int N   = (int) 2e5 + 5;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 9;

#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()
//#define int long long
//int32_t main(){}



int main() {
    string a, b;
    cin >> a >> b;
    //if test case  acba , bcdea its not possible
   // if(b.size()>a.size())return 0;

    //find out mismatch
   // hare paln should be 2 one way  sliding windows 0(n)
   // or cheek mistach char than min times find .tc will be 0(n*m)
    int aa= a.size();
    int bb=b.size();
    //int total =0;
    int total=bb;
    for(int i =0;i<=aa-bb;i++)
       {

        int way =0;
    //mis
    for(int j=0;j<bb;j++)
    {
        if(a[i+j]!=b[j]) way++;

    }
   total=min(total,way);
       }
       cout<<total<<endl;
}


