#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
 
        int p[3] = {x1, x2, x3};
        sort(p, p + 3);
 
        int median = p[1];
 
 
        int re = abs(median - x1) + abs(median - x2) + abs(median - x3);
 
        cout << re << endl;
    }
    return 0;
}
