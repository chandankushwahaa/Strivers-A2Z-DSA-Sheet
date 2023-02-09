#include <iostream>
using namespace std;

void printNos(int N)
{
    int i = N;
    if(i<1)
        return;

    cout<<i<<" ";
    printNos(N-1);

}

int main()
{
    int x = 10;

    printNos(x);
    return 0;
}
