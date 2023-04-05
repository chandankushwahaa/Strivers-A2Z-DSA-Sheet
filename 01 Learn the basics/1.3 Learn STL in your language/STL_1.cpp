// Array Container

#include <iostream>
#include <array>

using namespace std;

int main()
{
    // array Declaration
    array <int, 10> testArray1;

    // array Intialization
    array <int, 10> testArray2 = {5,10,20,30};

    // methods
    cout<< "At " << testArray2.at(2) << endl;    // out of boound safe
    cout<<"[] "<< testArray2[2] <<endl;          //unsafe

    cout<<"front() "<<testArray2.front()<<endl;  // return 1st elements
    cout<<"back() "<<testArray2.back()<<endl;  // return last elements

    testArray1.fill(0);             // fill array with 0

    testArray1.swap(testArray2);    // swap

    testArray1.empty();              //empty the array

    cout<<"Size is "<<testArray2.size()<<endl;
    cout<<"max Size "<<testArray2.max_size()<<endl;     // max size of array



    return 0;
}
