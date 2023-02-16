#include <iostream>
using namespace std;

//  TC = 2^n (expontial)
// multiple recursion
int fib(int n)
{
    if(n <= 1)
        return n;

    return fib(n-2) + fib(n-1);
}

int main()
{
    int n = 4;
    cout<<fib(n)<<endl;

    return 0;
}
