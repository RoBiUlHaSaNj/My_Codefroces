#include <bits/stdc++.h>
using namespace std;
#define int long long
void divisor(int n)

{

    vector<int>div;
    set<int>arr;
    for(int i=1;i*i<=n;i++)
    {

        if(n%i==0) {
        arr.insert(i);
   
        arr.insert(n/i);

        
    }
    }

    for(auto i : arr)cout<<i<<endl;
}

int32_t main() {
    int n;
    cin >> n;

    divisor(n);

}
 
int main() {
    long long N;
    cin >> N;
    

    vector<long long> f(N +1);
  long long sum_of_divisors = 1;
  //count 
    for (long long i = 1; i <= N; ++i) {
        for (long long j = i; j <= N; j += i) {
            f[j]++;
        }
    }
   
    
    
 //range variation 
    long long result=0;
    for (long long i = 1; i <= N; ++i) {
        result+=f[i];//
    }

    cout << result << endl;
    return 0;
}
/*
1.find divisor of N=4
4
1
2
4
2.find count of divisor number N=4;
4
3
3.find sum,multi,divi of divisor N=4
4
1 +2 +4=7
4.find range no of divisor count
4
1=1
2=2
3=2
4=3
output 8



*/
