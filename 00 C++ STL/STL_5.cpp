// Queue COntainer

#include <iostream>
#include <queue>
using namespace std;
/*
int main()
{
    // Declaration
    queue<int> queue1;

    //push values
    queue1.push(10);
    queue1.push(20);
    queue1.push(30);

    //Size
    cout<<endl<<"Size is : "<<queue1.size();
    //front
    cout<<endl<<"front element : "<<queue1.front();

    // back
    cout<<endl<<"back element : "<<queue1.back();

    //pop
    queue1.pop();
    cout<<endl<<"After poping Front element is : "<<queue1.front();
    return 0;
}
*/

// priority queue MAX HEAP - largest element will be in front
/*
int main()
{
    // create a ma heap
    priority_queue<int> queue1;

    // push values
    queue1.push(10);
    queue1.push(20);
    queue1.push(30);

    //Size
    cout<<endl<<"Size is : "<<queue1.size();
    //top
    cout<<endl<<"top elements : "<<queue1.top();

    //pop
    queue1.pop();
    cout<<endl<<"After poping Top is : "<<queue1.top();
    cout<<endl<<"Size is : "<<queue1.size();

    return 0;
}
*/

// priority queue MIN HEAP - smallest element will be in front
int main()
{
    // create a min hheap
    priority_queue <int,vector<int>, greater<int> > queue1;

    // push values
    queue1.push(10);
    queue1.push(20);
    queue1.push(30);

    //Size
    cout<<endl<<"Size is : "<<queue1.size();
    //top
    cout<<endl<<"top elements : "<<queue1.top();

    //pop
    queue1.pop();
    cout<<endl<<"After poping Top is : "<<queue1.top();
    cout<<endl<<"Size is : "<<queue1.size();

    return 0;
}
