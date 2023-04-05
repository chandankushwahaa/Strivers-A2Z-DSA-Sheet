// List COntainer
#include<iostream>
#include<list>
using namespace std;

int main()
{
    // Declaration
    std::list<int> list1;

    // Intialization
    std::list<int> list2 = {1,2,4,5,6,9};

    //methods
    list<int>::iterator i = list2.begin();

    //insert
    list2.insert(i, 10);
    for(list<int>::iterator i=list2.begin(); i != list2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //push_back
    list2.push_back(20);
    cout<<"push back"<<endl;
    for(list<int>::iterator i=list2.begin(); i != list2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    // push_front
    list2.push_front(0);
    cout<<"push front"<<endl;
    for(list<int>::iterator i=list2.begin(); i != list2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    // pop_back
    list2.pop_back();
    cout<<"pop back"<<endl;
    for(list<int>::iterator i=list2.begin(); i != list2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //pop_front
    list2.pop_front();
    cout<<"pop front"<< endl;
    for(list<int>::iterator i=list2.begin(); i != list2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //reverse
    list2.reverse();
    cout<<"reverse"<<endl;
    for(list<int>::iterator i=list2.begin(); i != list2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //swap
    list2.swap(list1);
    for(list<int>::iterator i=list1.begin(); i != list1.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;


    // size:- no of element prensent in the list1
    list1.size();
    cout<<"size is: "<<list1.size()<<endl;

    //sort
    list1.sort();
    cout<<"sort"<<endl;
    for(list<int>::iterator i=list1.begin(); i != list1.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //merge
    list1.merge(list2);
    cout<<"merge"<<endl;
    for(list<int>::iterator i=list1.begin(); i != list1.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;



    return 0 ;
}
