 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];

        }
      bool ok=true;

        for(int i=1;i<n;i++)
        {

            if(abs(arr[i]-arr[i-1])!=7 && abs(arr[i]-arr[i-1])!=5  ){
            //cout<<"NO"<<endl;


               ok=false;
            break;


          //  else cout<<"YES"<<endl;
        }
        }

        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
