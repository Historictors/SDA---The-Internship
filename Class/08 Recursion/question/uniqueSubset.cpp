#include <bits/stdc++.h>
using namespace std;

void fn(vector<int> &nums,vector<int> ds,vector<vector<int>> &ans,map<vector<int>,int>&mpp,int i){

    if(i >= nums.size()){
        sort(ds.begin(),ds.end());
        if(mpp.find(ds) == mpp.end()){
            ans.push_back(ds);
        }
        mpp[ds]++;
        return;
    }

    // exclude
    fn(nums,ds,ans,mpp,i+1);
    ds.push_back(nums[i]);
    fn(nums,ds,ans,mpp,i+1);
}

int main()
{
    vector<int> nums = {1,2,2};
    vector<vector<int>> ans;
    map<vector<int>,int> mpp;
    fn(nums,{},ans,mpp,0);
    for(auto i : ans){
        for(auto it : i) cout<< it<<" ";
        cout<< endl;
    }
}