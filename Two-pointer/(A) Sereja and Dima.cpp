#include <bits/stdc++.h>
using namespace std;
#define int long long



int32_t main() {
 //use  tp
 int  n; cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++) cin>>arr[i];

 int l=0,r=n-1;
 int s=0,d=0,m=0;
 while(l<=r)
 {
     int go;
     if(arr[l]>arr[r])
     {

        go=arr[l];
     l++;
     }
     else
     {
         go=arr[r];
         r--;

     }

     if(m%2==0) s+=go;
     else  d+=go;
     m++;
 }
  cout<<s <<" "<< d <<endl;



}
