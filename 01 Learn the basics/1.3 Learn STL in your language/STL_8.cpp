
#include <iostream>
#include <set>
using namespace std;
// Set COntainer
/*
int main()
{
    //Declaration
    set<int> set1 = {10,20,10,30,40,50,20};  // takes single 10 and 20
    for(set<int>::iterator i=set1.begin(); i!=set1.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl;

    //insert
    set1.insert(90);
    set1.insert(60);
    set1.insert(50);
    for(set<int>::iterator i=set1.begin(); i!=set1.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl;


    return 0;
}
*/

// multiset COntainer
int main()
{
    // Declaration
    multiset <int> mset1;


    //Intialization
    multiset <int> mset2 = {1,3,2,1,4,6,7,1,5,2};
    for(multiset<int>::iterator i=mset2.begin(); i!=mset2.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl;

    //insert
    mset2.insert(9);

    // erase 3 approach
    multiset<int>::iterator del = mset2.begin();
    mset2.erase(del);                               // by using iterator

    mset2.erase(2);                 // by using value

    mset2.erase(mset2.begin(), mset2.find(5));          // by using range -> start to value 5

    for(multiset<int>::iterator i=mset2.begin(); i!=mset2.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl;

    return 0;
}
