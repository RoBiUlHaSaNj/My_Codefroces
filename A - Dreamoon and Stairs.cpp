#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;  
    
    // smallest integer greater than or equal to n/2
    int l = (n + 1) / 2;
    
    // smallest multiple of m that is >= l
    int ans = (l + m - 1) / m * m;
    
    //  exceed n,
    if (ans > n) ans = -1;
    
    
    cout << ans;
    
    return 0;
}
