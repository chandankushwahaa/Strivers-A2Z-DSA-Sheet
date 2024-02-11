/*
n = 25  => 5
n = 30  => 5.47 => 5
n = 36  => 6
n = 45  => 6.7 => 6
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
int square(int n)
{
  int ans=0;
  for(long long i=1; i<n; i++){
    long long value = i*i;
    if(value <= n*1LL)
      ans = i;
    else
      break;
  }
  return ans;
}

// O(logn)
int square2(int n)
{
  int low=0, high=n;
  while(low <= high){
    long long mid = (low+high)/2;
    long long ans = mid*mid;
    if(ans <= (long long)(n)){
      // left element
      low = mid+1;
    }
    else{
      // right element
      high = mid-1;
    }
  } // Add a missing closing brace here
  return high;
  // return ans;
}

int main()
{
  int n = 36;

  cout<<square(n)<<endl;
  cout<<square2(n)<<endl;
}