#include <bits/stdc++.h>
using namespace std;

int countDigit(long long x) {

    int cnt = 0 ;
    while(x > 0){
        long long lstdigt = x % 10;
        cnt += 1;
        x /= 10;
    }
    // OR

    // int cnt = (int)(log10(x) + 1);

    return cnt;
}

int main()
{
    long long n;
    cin>>n;
    cout<<countDigit(n)<<endl;

    return 0;
}
