#include <bits/stdc++.h>
using namespace std;



vector<long long> tree;  
int n;  


void build(vector<long long> &arr, int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];  
    } else {
        int mid = (start + end) / 2;
        build(arr, 2 * node + 1, start, mid);        
        build(arr, 2 * node + 2, mid + 1, end);      
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];  
    }
}


void update(int node, int start, int end, int idx, long long val) {
    if (start == end) {
        tree[node] = val;  
    } else {
        int mid = (start + end) / 2;
        if (idx <= mid) {
            update(2 * node + 1, start, mid, idx, val); 
        } else {
            update(2 * node + 2, mid + 1, end, idx, val);  
        }
       
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
}

long long query(int node, int start, int end, int l, int r) {
    if (r < start || l > end) {
        return 0;  
    }
    if (l <= start && end <= r) {
        return tree[node]; 
    }
    int mid = (start + end) / 2;
    long long left_sum = query(2 * node + 1, start, mid, l, r);      
    long long right_sum = query(2 * node + 2, mid + 1, end, l, r);   
    return left_sum + right_sum;  
}

int main() {
    int m;
    cin >> n >> m;
    vector<long long> arr(n);

 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }


    tree.resize(4 * n);

    build(arr, 0, 0, n - 1);


    for (int i = 0; i < m; ++i) {
        int type;
        cin >> type;
        if (type == 1) {
          
            int idx;
            long long val;
            cin >> idx >> val;
            update(0, 0, n - 1, idx, val);
        } else if (type == 2) {
       
            int l, r;
            cin >> l >> r;
            cout << query(0, 0, n - 1, l, r - 1) << endl;
        }
    }

    return 0;
}
