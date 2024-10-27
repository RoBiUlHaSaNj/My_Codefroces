
#include <bits/stdc++.h>
using namespace std;


/*
two  list
-enter car
-exit car
mismatch
pos->enter car
expos->exit car
than compair both from list
if cnter car[pos]==exotcar[ex] both barabo  thats mean shamot car
else  cnter car[pos]!=exotcar[ex]   bahire so  barabo  expos
set nia 2ta re track korbo   same car mani  cnt 1
   */
int main()
{

    int n;
    cin>>n;
    vector<int>et(n),ex(n);
    for(int i=0; i<n; i++)cin>>et[i];
    for(int i=0; i<n; i++)cin>>ex[i];
    long long sum =0;
    int l=n-1,r=n-1;
    vector<bool>vis(n);
    while(l>-1 && r>-1)
    {

        if(et[l]==ex[r])
        {
            --l;
            --r;
        }
        else
        {

            if(vis[ex[r]])--r;
            else
            {
                sum++;
                vis[et[l]]=1;
                --l;
            }
        }
    }
    cout<<sum;

}
