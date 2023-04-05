// MAP COntainer

#include <iostream>
#include <string>
#include <map>
using namespace std;

// map() contain sorted key value pair. Each key is unique and can`t be changed.
/*
int main()
{
    // Declaration
    std::map<int, string> map1;

    // Intialization
    std::map<int, string> map2 = {{101, "Ram"}, {201,"shyam"}, {301,"sk"}, {401,"CK"} };

    //Size
    cout<<endl<<"Size is : "<<map2.size();

    cout<<"values are:- "<<endl;
    for(map<int, string>::iterator i=map2.begin(); i !=map2.end(); i++)
    {
        // for printing the map KEY
        cout<< i->first <<" ";
        // for printing value - string value
        cout<< i->second <<endl;
    }
    cout<<endl;

    // insert
    map2[201] = "Tim";
    cout<<"values are:- "<<endl;
    for(map<int, string>::iterator i=map2.begin(); i !=map2.end(); i++)
    {
        // for printing the map KEY
        cout<< i->first <<" ";
        // for printing value - string value
        cout<< i->second <<endl;
    }
    cout<<endl;

    // at() - get value by KEY
    cout<<"VAlue at 201 :"<< map2.at(201)<<endl;        // out of bound safe
    // [] - get value by KEY
    cout<<"VAlue at 201 :"<< map2[201]<<endl<<endl;        // unsafe

    // insert: insert key, value at particular location as MAP is sorted
    // 2 approach
    map2.insert(pair<int, string>(106, "Amit"));        // should match with the map parameter
    map2.insert(make_pair(208, "Hina"));
    for(map<int, string>::iterator i=map2.begin(); i !=map2.end(); i++)
    {
        cout<< i->first <<" ";
        cout<< i->second <<endl;
    }
    cout<<endl;

    // erase() : remove entry in map pointed by iteration
    map<int, string>::iterator i = map2.begin();
    map2.erase(i);
    for(map<int, string>::iterator i=map2.begin(); i !=map2.end(); i++)
    {
        cout<< i->first <<" ";
        cout<< i->second <<endl;
    }
    cout<<endl;
    return 0;
}
*/

// multimap() can have suplicate KEY-VALUE, we can insert/delete the value but we can1t alter it.
int main()
{
    // Declaration
    multimap <int, string> mmap1;

    //Intialization
    multimap <int, string> mmap2 = {{101,"Ram"},{201,"shyam"},{201,"Tim"},{301,"SK"},{401,"CK"}};

    //Size
    cout<<endl<<"Size is : "<<mmap2.size()<<endl;

    cout<<endl<<"values are: "<<endl;
    multimap<int,string>:: iterator i=mmap2.begin();
    for(i; i!= mmap2.end(); i++)
    {
        cout<< i->first<<" ";
        cout<< i->second<<endl;
    }
    cout<<endl;

    // alter can`t be done

    // insert: insert key, value at particular location as MAP is sorted
    // 2 approach
    mmap2.insert(pair<int, string>(106, "Amit"));        // should match with the map parameter
    mmap2.insert(make_pair(208, "Hina"));
    for(map<int, string>::iterator i=mmap2.begin(); i !=mmap2.end(); i++)
    {
        cout<< i->first <<" ";
        cout<< i->second <<endl;
    }
    cout<<endl;

    //count() : return number of ellements  matching with given key.
    cout<<"Count no. of 201: "<<mmap2.count(201)<<endl;

    // clear() : delete all elements in multimap.
    return 0;
}
