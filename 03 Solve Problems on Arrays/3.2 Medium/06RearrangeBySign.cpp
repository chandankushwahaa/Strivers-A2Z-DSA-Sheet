#include <bits/stdc++.h>
using namespace std;


vector<int> rearrArrayEle(vector<int> &arr, int n)
{
    vector<int> ans(n, 0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i=0; i<n; i++){
        // Fill negative elements in odd indices and inc by 2.
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        // Fill positive elements in even indices and inc by 2.
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}
// TC -> O(n)+O(n)   SC-> O(n)
vector<int> rearrArrayEle2(vector<int> &arr, int n)
{
    vector<int> posIndex;
    vector<int> negIndex;

    // Segregate the array into positives and negatives.
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            posIndex.push_back(arr[i]);
        }else{
            negIndex.push_back(arr[i]);
        }
    }
    // Positives on even indices, negatives on odd.
    for(int i=0; i<n/2; i++){
        arr[2*i] = posIndex[i];
        arr[2*i+1] = negIndex[i];
    }
    return arr;
}

vector<int> rearrArrayEle3(vector<int> &arr, int n)
{
    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<n;i++){
        if(arr[i]>0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    // If positives are lesser than the negatives.
    if(pos.size() < neg.size()){
      // First, fill array alternatively till the point
      // where positives and negatives ar equal in number.
      for(int i=0;i<pos.size();i++){
          arr[2*i] = pos[i];
          arr[2*i+1] = neg[i];
      }
      // Fill the remaining negatives at the end of the array.
      int index = pos.size()*2;
      for(int i = pos.size();i<neg.size();i++){

          arr[index] = neg[i];
          index++;
      }
    }
    // If negatives are lesser than the positives.
    else{

        // First, fill array alternatively till the point
        // where positives and negatives ar equal in number.
        for(int i=0;i<neg.size();i++){

        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }

      // Fill the remaining positives at the end of the array.
      int index = neg.size()*2;
      for(int i = neg.size();i<pos.size();i++){

          arr[index] = pos[i];
          index++;
      }
    }
    return arr;
}

void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {3,1,-2,-5,2,-4};
    int n = arr.size();
    printV(arr, n);
    cout<<endl<<endl;

    vector<int> ans = rearrArrayEle(arr,n);
    printV(ans, ans.size());

    cout<<endl;
    vector<int> ans2 = rearrArrayEle2(arr,n);
    printV(ans, ans2.size());

    cout<<endl;
    vector<int> ans3 = rearrArrayEle3(arr,n);
    printV(ans, ans3.size());


    return 0;
}
