#include <iostream>
using namespace std;

long long sumOfSeries(long long n)
{
    long long sum = n*(n+1)/2;

	return sum*sum;
}

int main()
{
    int n = 5;

    cout<<sumOfSeries(n);

}
