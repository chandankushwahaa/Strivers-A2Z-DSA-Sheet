#include <bits/stdc++.h>
using namespace std;

void printGCD(int a, int b)
{
    int gcd = 0;
    for(int i=1; i<=min(a,b); i++){

        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    cout<<gcd;
}
/*Euclidean Algorithms
gcd(a,b) = gcd(a-b, b)      a>b
gcd(15,5) = gcd(10,5) => gcd(5,5) => gcd(0,5) => gcd(5)
*/
void printGCDEucli(int a, int b)
{
    // O(logx(min(a,b)))  - x is base
    while (a>0 && b>0) {

        if(a>b)
            a = a % b;
        else
            b = b % a;
    }
    if(a == 0)
        cout<<b;
    else
        cout<<a;

}
int main()
{
    int n1, n2;
	cin>>n1>>n2;

    printGCD(n1, n2);
    cout<<endl;
    printGCDEucli(n1, n2);
    return 0;
}
