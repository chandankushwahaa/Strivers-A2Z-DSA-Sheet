#include <iostream>
using namespace std;

// TC = O(n)
// SC = O(n)
void printNos(int N)
{
    if(N == 0)
        return;

    cout<<"GFG"<<" ";
    printNos(N-1);
}

int main()
{
    int x = 10;

    printNos(x);
    return 0;
}
