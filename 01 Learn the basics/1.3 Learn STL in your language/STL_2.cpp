// Vector Container

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaration
    vector <int> testVector1;
    cout<<"Size " << testVector1.size()<<endl;

    // Intialization
    vector <int> testVector2 = {10,20,30};

    // methods
    cout<<"At " << testVector2.at(2)<<endl;                 // out of bound safe
    cout<<"[] " << testVector2[2]<<endl;                    // unsafe

    // inserting elements at the end of the vector
    testVector2.push_back(40);
    testVector2.push_back(50);
    testVector2.push_back(60);

    // to check values are added or not
    for (vector<int>::iterator i=testVector2.begin(); i!= testVector2.end(); i++)
    {
        cout<< *i <<" ";       //for printing vector
    }
    cout<<endl;

    // pop out the last element
    testVector2.pop_back();
    for (vector<int>::iterator i=testVector2.begin(); i!= testVector2.end(); i++)
    {
        cout<< *i <<" ";       //for printing vector
    }
    cout<<endl;

    //insert():-  inserts the element in vector before the position pointed by iterator
    // vector<int>::iterator i = testVector2.begin();
    // testVector2.insert(i, 0);
    for (vector<int>::iterator i=testVector2.begin(); i!= testVector2.end(); i++)
    {
        cout<< *i <<" ";       //for printing vector
    }
    cout<<endl;

    // pop_back():- remove the last element from the vector. It reduces the size of vector by one.
    testVector2.pop_back();

    // erase():- removes the element pointed by the iterator.
    vector<int>::iterator i = testVector2.begin();
    testVector2.erase(i);
    for (vector<int>::iterator i=testVector2.begin(); i!= testVector2.end(); i++)
    {
        cout<< *i <<" ";       //for printing vector
    }

    // erase all element except last element
    testVector2.erase(testVector2.begin(), testVector2.end() - 1);

    // swap():- interchanges two values of vectors
    testVector2.swap(testVector1);
    
    // capacity():- no. of elements that can be inserted in the vector based on the memory allocated too the vector
    cout<<endl <<"capacity "<<testVector2.capacity()<<endl;



    return 0;

}
