

#include <bits/stdc++.h>
using namespace std;
int main()
{


    int t;cin>>t;
    while(t--){
            int n;cin>>n;
    vector<int>arr(n);
    long long total_sum = 0;
    long long op = 0;
    bool Is_segment = false;
   // -1 7 -4 -2 5 -8 =27
    for(int i=0;i<n;i++){
            cin>>arr[i];
    total_sum+=abs(arr[i]);
    if(arr[i]<0)
   {

   if(!Is_segment)
    {
        op++;
        Is_segment = true;

    }
   }
    else if(arr[i]>0)Is_segment = false;

    }
    cout<<total_sum<<" "<<op<<endl;

    }
}
