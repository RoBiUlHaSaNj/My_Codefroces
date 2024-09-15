#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
int a[t],c=1;
 for(int i=0;i<t;i++)
 {
     cin>>a[i];
 
 }
 sort(a,a+t);
for(int i=0;i<t-1;i++)
 {
     if(a[i]!=a[i+1])
        c++;
 
 }
 cout<< c <<endl;
 
    return 0;
}
