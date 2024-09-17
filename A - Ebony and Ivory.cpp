#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c ;
    bool x = false;
    for(int i=0;i<=c/a;i++){
            int y = c- (i*a);
         if(y%b==0){
            x = true;
            break;
         }
    }
    
    
    if(x){
            cout << "Yes" << endl;

    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
