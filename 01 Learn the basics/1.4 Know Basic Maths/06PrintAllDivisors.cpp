#include <bits/stdc++.h>
using namespace std;

// O(n)
/*void printDivisors(int n)
{
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
}*/

// Total time: O(sqrt(n)) + O(n*log (n) + O(n)
void printDivisors(int n)
{
    vector<int> ls;
    // sqrt(n)  <=>  i*i<=n
    // O(sqrt(n))
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            // cout<<i<<" ";
            ls.push_back(i);
            if(n/i != i){
                // cout<<(n/i)<<" ";
                ls.push_back(n/i);
            }
        }
    }
    // O(n*log (n) : n is the number of factors
    sort(ls.begin(), ls.end());
    // O(n)
    for(auto it : ls)
        cout<<it<<" ";
}
int main()
{
    int n;
	cin>>n;
    printDivisors(n);

    return 0;
}
