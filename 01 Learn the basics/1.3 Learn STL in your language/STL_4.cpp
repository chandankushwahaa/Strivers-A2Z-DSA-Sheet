// Stack COntainer

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Declaration
    stack<int> stack1;

    // push values
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);

    //Size
    cout<<"no. of elements - "<<stack1.size()<<endl;

    //top
    cout<<"top elements - "<<stack1.top();

    //pop
    stack1.pop();
    cout<<endl<<"After poping Top is - "<<stack1.top();




    return 0;
}
