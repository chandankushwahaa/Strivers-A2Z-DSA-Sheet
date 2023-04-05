// unordered_map COntainer
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    //Declaration
    unordered_map <int, string> umap1;
    //Intialization
    unordered_map <int, string> umap2 = {{101,"ram"},{201,"Tim"},{501,"Shyam"},{301,"Cook"}};

    //Size
    cout<<endl<<"Size is : "<<umap2.size()<<endl<<endl;

    cout<<"values are:-"<<endl;
    unordered_map<int, string>::iterator i=umap2.begin();
    for(i; i!= umap2.end(); i++)
    {
        cout<< i->first <<" ";
        cout<< i->second <<endl;

    }
    cout<<endl;

    // alter
    umap2[201] = "Ayush";
    cout<<endl<<"value at(201) "<<umap2.at(201);        //safe
    cout<<endl<<"value [201] "<<umap2[201]<<endl<<endl;             // unsafe

    // insert:- insert key, value
    // 2 approach
    umap2.insert(pair<int, string>(106, "Amit"));        // should match with the map parameter
    umap2.insert(make_pair(208, "Hina"));
    for(unordered_map<int, string>::iterator i=umap2.begin(); i !=umap2.end(); i++)
    {
        cout<< i->first <<" ";
        cout<< i->second <<endl;
    }
    cout<<endl;
    return 0;
}
