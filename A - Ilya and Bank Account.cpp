#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    if (n >= 0) {
 
        cout << n << endl;
    } else {
 
        long long remove_last = n / 10;
 
       //2nd
        long long last_digit = n % 10;
        long long without_last_two = n / 100;
        long long remove_before_last = without_last_two * 10 + last_digit;
 
      // long long last_digit = n % 10;
        //long long without_last_two = n / 1000;
        //long long remove_before_last = without_last_two * 10 + last_digit;
        cout << max(remove_last, remove_before_last) << endl;
    }
 
    return 0;
}
