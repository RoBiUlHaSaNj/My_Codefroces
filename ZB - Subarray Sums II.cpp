#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x; 
    long long count = 0; 
    long long sum = 0; 
    unordered_map<long long, long long> sumCount;

  
    sumCount[0] = 1;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a; 
        sum += a; 

        if (sumCount.find(sum - x) != sumCount.end()) {
            count += sumCount[sum - x];
        }

       
        sumCount[sum]++;
    }

    cout << count << endl;  
  
}
