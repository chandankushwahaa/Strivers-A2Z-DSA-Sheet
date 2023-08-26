#include <bits/stdc++.h>
using namespace std;

// TYPE 1 (n C r)
int nCr(int n, int r)
{
    long long ans = 1;
    // TC-> O(r)
    for(int i=0; i<r; i++)
    {
        ans *= (n-i);
        ans /= (i+1);
    }
    return ans;
}
// (r-1 C c-1)
int PascalTrinangle(int r, int c)
{
    return nCr(r-1, c-1);
}

// TYPE 2.1 - Print any given ROW of Pascal Triangle
int PascalTriangle2(int n)
{
    // O(n*r)
    for(int c=1; c<=n; c++)  // n
    {
        cout<<nCr(n-1, c-1)<<" ";  // r
     }
}
// 2.2 O(n)
void PascalRow(int n)
{
    long long ans = 1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++)
    {
        ans *= (n-i);
        ans /= i;
        cout<<ans<<" ";
    }
    cout<<endl;
}

// TYPE 3.1 - Print Pascal Triangle
// TC -> O(n*n*r) =~ O(n^3)
vector<vector<int>> PascalTriangle3(int n)
{
    vector<vector<int>> ans;
    for(int r=1; r<=n; r++){
        vector<int> temp;
        for(int c=1; c<=n; c++){
            temp.push_back(nCr(r-1, c-1));
        }
        ans.push_back(temp);
    }
    return ans;
}

// TYPE 3.2 
vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    // calculate rest element
    for(int col=1; col<row; col++){
        ans = ans*(row-col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> PascalTriangle4(int n)
{
    vector<vector<int>> ans;
    for(int row=1; row<=n; row++){
        ans.push_back(generateRow(row));
    }
    return ans;
}
int main()
{    
    int r = 5, c = 3;
    cout<<PascalTrinangle(r, c)<<endl;
    cout<<endl<<"Row of Pascal Triangle: "<<endl;
    int n = 5;
    PascalTriangle2(n);
    cout<<endl;
    PascalRow(n);
    cout<<endl<<"Print Pascal Triangle: "<<endl;

    vector<vector<int>> v = PascalTriangle3(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

        cout<<endl;
        cout<<endl;
    vector<vector<int>> v2 = PascalTriangle4(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v2[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}