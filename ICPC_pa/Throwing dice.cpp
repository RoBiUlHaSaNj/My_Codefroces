//calculate a and b value cheek and find who best

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    ll v_A = 0, v_B = 0;


    for (int i = 0; i < a; i++) {
        int v;
        cin >> v;
        v_A += v;
    }


    for (int i = 0; i < b; i++) {
        int v1;
        cin >> v1;
        v_B += v1; 
    }


    double t_A = (v_A + a) / 2.0; 
    double t_B = (v_B + b) / 2.0; 


    if (t_A > t_B)
        cout << "ALICE" << endl;
    else if (t_A < t_B)
        cout << "BOB" << endl;
    else
        cout << "TIED" << endl;

}
