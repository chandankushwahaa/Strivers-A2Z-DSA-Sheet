#include <bits/stdc++.h>
using namespace std;

// SC-> O(1)
void sortArray(vector<int> &arr, int n)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    // O(N)
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }

    // O(N)
    for (int i = 0; i < cnt0; i++)
        arr[i] = 0; // replacing 0's

    for (int i = cnt0; i < cnt0 + cnt1; i++)
        arr[i] = 1; // replacing 1's

    for (int i = cnt0 + cnt1; i < n; i++)
        arr[i] = 2; // replacing 2's
}

// Optimal (Dutch national Flag Algorithm) 3 Pointer
void sortArray2(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
// TC-> O(N)
    while(mid <= high)
    {
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0};
    int n = arr.size();

    sortArray(arr,n);
    printV(arr, n);

cout<<endl;
    sortArray2(arr,n);
    printV(arr, n);

    return 0;
}
