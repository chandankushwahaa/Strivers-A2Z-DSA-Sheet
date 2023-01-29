#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
	cin>>n;

    int lastdigit, sum = 0;
    int temp = n;
    while(n > 0){
		lastdigit = n % 10;
        int c = lastdigit*lastdigit*lastdigit;

        sum = sum + c;
		n /= 10;
    }

    if(temp == sum)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
