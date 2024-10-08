#include <bits/stdc++.h>
using namespace std;
using ll = long long;


vector<pair<ll, ll>> segTree; //min c
vector<ll> arr; 


void build(ll node, ll st, ll ed) {
    if (st == ed) {
        segTree[node] = {arr[st], 1}; 
    } else {
        ll mid = (st + ed) / 2;
        build(2 * node + 1, st, mid); 
        build(2 * node + 2, mid + 1, ed); 

       
        if (segTree[2 * node + 1].first < segTree[2 * node + 2].first) {
            segTree[node] = segTree[2 * node + 1]; // left
        } else if (segTree[2 * node + 1].first > segTree[2 * node + 2].first) {
            segTree[node] = segTree[2 * node + 2]; //  right
        } else {
            segTree[node] = {segTree[2 * node + 1].first, segTree[2 * node + 1].second + segTree[2 * node + 2].second}; //  min, c
        }
    }
}


void update(ll node, ll st, ll ed, ll idx, ll val) {
    if (st == ed) {
        arr[idx] = val; 
        segTree[node] = {val, 1}; 
    } else {
        ll mid = (st + ed) / 2;
        if (st <= idx && idx <= mid) {
            update(2 * node + 1, st, mid, idx, val);
        } else {
            update(2 * node + 2, mid + 1, ed, idx, val); 
        }

        
        if (segTree[2 * node + 1].first < segTree[2 * node + 2].first) {
            segTree[node] = segTree[2 * node + 1];
        } else if (segTree[2 * node + 1].first > segTree[2 * node + 2].first) {
            segTree[node] = segTree[2 * node + 2];
        } else {
            segTree[node] = {segTree[2 * node + 1].first, segTree[2 * node + 1].second + segTree[2 * node + 2].second}; 
        }
    }
}

//  query the minimum value and its count in a range
pair<ll, ll> query(ll node, ll st, ll ed, ll L, ll R) {
    if (R < st || ed < L) return {LLONG_MAX, 0}; // Out of range
    if (L <= st && ed <= R) return segTree[node]; 

    ll mid = (st + ed) / 2;
    auto leftResult = query(2 * node + 1, st, mid, L, R); 
    auto rightResult = query(2 * node + 2, mid + 1, ed, L, R); 

    
    if (leftResult.first < rightResult.first) {
        return leftResult;
    } else if (leftResult.first > rightResult.first) {
        return rightResult;
    } else {
        return {leftResult.first, leftResult.second + rightResult.second}; 
    }
}

int main() {
    int n, m;
    cin >> n >> m; 
    arr.resize(n);
    segTree.resize(4 * n); 

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    build(0, 0, n - 1); 

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;

        if (t == 1) { 
            int idx, val;
            cin >> idx >> val; 
            update(0, 0, n - 1, idx, val); 
        } else if (t == 2) { 
            int l, r;
            cin >> l >> r;
            auto result = query(0, 0, n - 1, l, r - 1); 
            cout << result.first << " " << result.second << endl; 
        }
    }

   
}
