#include <bits/stdc++.h>
using namespace std;
int fn(vector<int> &vec,int high, int low, int mid,int target,int index =-1){
    if(low > high) return -1;

    
    if(vec[mid] == target){
      
        return mid;
    }

    if(vec[mid] > target){
        high = mid-1;
        mid = low + (high-low)/2;
       return fn(vec,high,low,mid,target);
    }
    if(vec[mid] < target){
        low = mid+1;
        mid = low+(high-low)/2;
      return  fn(vec,high,low,mid,target);
    }
    return index;
}

int main()
{
    vector<int> vec = {2,5,7,6,1,2};
    // 1 2 2 5 6 7
    sort(vec.begin(),vec.end());
    int n =vec.size();
  cout<<  fn(vec,n-1,0,n/2,6);

}