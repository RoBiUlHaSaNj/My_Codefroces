#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    int n, m;
    cin >> n >> m;
    
   
    multiset<int> ticket;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        ticket.insert(price);
    }
    
    
    for (int i = 0; i < m; i++) {
        int price;
        cin >> price;
        
      
        auto it = ticket.upper_bound(price);
        if (it == ticket.begin()) {
           
            cout << -1 << endl;
        } else {
           
            it--; 
            cout << *it << endl;
            ticket.erase(it);  
        }
    }
    
    
}
