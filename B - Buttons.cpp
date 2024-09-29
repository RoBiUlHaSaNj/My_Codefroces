#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
 // 2^n-1
  long long sum = n*(n+1)*(n-1);
  sum = sum/6;
  sum = sum + ( n);
  cout<<sum<<endl;

  return 0;

}
