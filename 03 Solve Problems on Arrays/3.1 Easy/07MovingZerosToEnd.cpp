#include <bits/stdc++.h>
using namespace std;

// BruteForce
vector<int> movingZeros(vector<int> &arr, int n)
{
    vector<int> temp;

    for(int i=0; i<n; i++){
        if(arr[i] != 0)
            temp.push_back(arr[i]);
    }
    // No. og Non zeroes elements
    int nz = temp.size();
    for(int i=0; i<nz; i++){
        arr[i] = temp[i];
    }

    for(int i=nz; i<n; i++){
        arr[i] = 0;
    }

    return arr;
}
// Optimal
vector<int> movingZeros2(vector<int> &arr, int n)
{
    int j=-1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
// NO Non 0s elements
    if(j == -1)
         return arr;

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}
void print(vector<int> &arr, int n)
{
	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}
}
int main()
{
    vector<int> arr = {1, 2, 0, 0, 5, 0, 0, 0, 7};
    int n = arr.size();


    vector<int> ans = movingZeros(arr, n);
    vector<int> ans2 = movingZeros2(arr, n);

	print(ans, n);
    cout<<endl;
	print(ans2, n);

    return 0;
}
