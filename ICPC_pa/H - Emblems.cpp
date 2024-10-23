#include <bits/stdc++.h>
using namespace std;
#define int long long int


string getRating(int rate) {
    if (rate <= 1199)
        return "newbie";
    else if (rate <= 1399)
        return "pupil";
    else if (rate <= 1599)
        return "specialist";
    else if (rate <= 1899)
        return "expert";
    else if (rate <= 2099)
        return "candidate master";
    else if (rate <= 2399)
        return "master";
    return "grandmaster"; 
}

void solve() {
    string s;
    cin >> s; 

    int cur, mx, delta;
    cin >> cur >> mx >> delta; 


    int newRating = cur + delta;


    string maxi = getRating(mx);
    string newcur = getRating(newRating);

    
    if (maxi == newcur || newRating <= mx) {
        cout << "Think about it, you can do it!" << endl;
    } else {
        cout << newcur << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int t = 1; 
    // cin >> t; 
    for (int i = 1; i <= t; i++) {
        solve(); 
    }
    return 0;
}
