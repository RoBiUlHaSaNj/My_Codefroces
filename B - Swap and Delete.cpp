#include <bits/stdc++.h>
using namespace std;

//1.reverse proble p type string 110 -> 011 problems[1]=1 both
//if we find out any kind similer like s[1] we can
//remove it if 1  than it wil  be 0  problem i need to
//find minimum cost (swap cost zero  )




int main() {
    int t;
    cin >> t;
    vector<int>ans;

    while (t--) {
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;


        for (char ch : s) {
            if (ch == '0') c0++;
            else if (ch == '1') c1++;
        }
        
  for(int i =0;i<s.size();i++)
  {
      if(s[i]=='1'){
        if(c0>0)c0--;//,cout<<c0;
      else
        break;}

      else{
        if(c1>0)c1--;//,cout<<c1;
        
        else break;

      }
  }


cout<<c1+c0<<endl;





    }}
