


//idea  use cross_product just 1 2 3 4 5 ....
//clock wise  so if 3 2 5 than a to 3 = 2 than 2 =4 than 5 =3  total 9



#include<bits/stdc++.h>
using namespace std;

int main() {
  long long  counta = 0;
    int curr = 1;
    int n, m;
    cin >> n >> m;
    vector<int> aa(m);

    for(int i = 0; i < m; i++) {
        cin >> aa[i];

        if (aa[i] >= curr) {

            counta += aa[i] - curr;
        } else {

            counta += n - (curr - aa[i]);
        }

        curr = aa[i];
    }

    cout << counta << endl;
    return 0;
}
