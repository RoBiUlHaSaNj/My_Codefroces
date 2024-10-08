#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
int main(){



int a,b,c,m;
cin>>a>>b>>c>>m;
vector<pair<int,string>> A;
for(int i=0;i<m;i++)
{
    int cost;
    string type;
    cin>>cost>>type;
    A.push_back(make_pair(cost,type));

}

sort(A.begin(),A.end());
ll ans1=0,ans2=0;
for(auto &x :A)
{
    if(x.second =="USB")
    {
        if(a>0){a--;
        ans2+=x.first;
        ans1++;}
        else if(c>0){
            c--;
            ans2+=x.first;
            ans1++;
        }

    }
    else
    {
        if (b > 0) {
                b--;
                ans2 += x.first;
                ans1++;
            } else if (c > 0) {
                c--;
                ans2 += x.first;
                ans1++;
            }

    }
}
cout<<ans1 <<" "<<ans2 <<endl;

}
