// unordered_set COntainer
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    //Declaration
    unordered_set <int> uset1;

    ///Intialization
    unordered_set <int> uset2 = {1,2,5,3,8,0,7,6,2,4};

    for(unordered_set<int>::iterator i=uset2.begin(); i!=uset2.end(); i++)
    {
        cout<< *i<<" ";         // values are not sorted and random values
    }
    cout<<endl;

    ///insert
    uset2.insert(200);
    cout<<endl<<"inseted 200"<<endl;
    for(unordered_set<int>::iterator i=uset2.begin(); i!=uset2.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl<<endl;

    //erase 3 approach
    unordered_set<int>::iterator del = uset2.begin();
    uset2.erase(del);                               // by using iterator

    uset2.erase(2);                                 // by using value
    for(unordered_set<int>::iterator i=uset2.begin(); i!=uset2.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl<<endl;

    uset2.erase(uset2.begin(), uset2.find(5));     // by using range -> start to value 5
    for(unordered_set<int>::iterator i=uset2.begin(); i!=uset2.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl;


    return 0;
}
