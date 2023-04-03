#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}
vector<long long> factorialNumbers(long long N)
{
    vector<long long> fact;
    long long ans=1, i;
    for(i=1; i<=N; i++){
        ans = ans * i;
        if(ans > N)
            break;

        fact.push_back(ans);
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;

    cout<<"Answer is "<< factorial(n) <<endl;


    vector<long long> ans = factorialNumbers(n);
    for(auto num : ans){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}
