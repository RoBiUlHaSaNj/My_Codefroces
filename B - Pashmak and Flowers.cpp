#include<bits/stdc++.h>
using namespace std;
#define int long long int
//typedef long long int;

int32_t main() {
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];

   }
    //sort(a.begin(),a.end());
  // int diff = a[n-1] - a[0];
   // cout << diff << endl;


    int max_val = *max_element(a.begin(), a.end());
    int min_val = *min_element(a.begin(), a.end());

       int count_max = count(a.begin(), a.end(), max_val);
       int count_min = count(a.begin(), a.end(), min_val);

 if (max_val == min_val) {
        // Number of ways to pick any 2 flowers: nC2 = n*(n-1)/2
        cout << 0 << " " << (n * (n - 1)) / 2 << endl;
    } else {


        cout << (max_val - min_val) << " " << count_max * count_min << endl;
    }


}
