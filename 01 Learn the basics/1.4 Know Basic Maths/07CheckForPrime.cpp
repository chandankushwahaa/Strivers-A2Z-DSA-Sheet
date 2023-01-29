#include <bits/stdc++.h>
using namespace std;

// Extreme brute force approach O(n)
/*
void primeNumber(int n)
{
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cnt++;
        }
    }
    if(cnt == 2)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
*/

// O(sqrt(n))
void primeNumber(int n)
{
    int cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            cnt++;
            if((n/i) != i){
                cnt++;
            }
        }
    }
    if(cnt == 2)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
int main()
{
    int n;
	cin>>n;

    primeNumber(n);
    return 0;
}
