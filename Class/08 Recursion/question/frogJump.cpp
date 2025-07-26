#include <bits/stdc++.h>
using namespace std;

int fn(vector<int> &nums,int start,int end,int k){
    if(start >= end) return 0;
    int ans = INT_MAX;

    for(int i =1;i<=k;i++){

        if((start+i) != nums.size())
        {
        int res = nums[start+i] + fn(nums,start+i,end,k);
        ans   =min(ans,res);
        }
        else return 0;
    }
    return ans;
}
int main(){
int n ;
cin>>n;

  vector<int> nums(n);
    for(int i =0;i<n;i++) cin>> nums[i];
    int k;
    cin >>k;
    cout << fn(nums,-1,n,k);
}

