#include <iostream>
using namespace std;

void printNos(int N)
{
    if(N == 0)
        return;

    printNos(N-1);
    cout<<N<<" ";
}

int main()
{
    int x = 10;

    printNos(x);
    return 0;
}
