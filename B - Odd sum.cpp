
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    ll sum = 0;
    int odd =false;
    int minod=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            sum += arr[i];
        }

        if (arr[i]% 2 != 0)
        {
            //cout << sum << endl;
            odd=true;
            minod=min(minod,abs(arr[i]));

        }

    }

    if(sum%2!=0) cout<<sum<<endl;
    else
    {
        if(odd)
        {
            cout<<sum - minod<<endl;

        }
        else cout<<sum<<endl;
    }



}
