#include <bits/stdc++.h>
using namespace std;
void subSet(vector<int> &nums,vector<vector<int>> & D2,vector<int> ds,int ind){

    if(ind >= nums.size()){
        D2.push_back(ds);
        return;
    }
// exclude the current element
    subSet(nums,D2,ds,ind+1);
// include the current element
    ds.push_back(nums[ind]);
    subSet(nums,D2,ds,ind+1);

}

vector<vector<int>> subSets(vector<int> &nums,vector<vector<int>> & D2,vector<int> ds,int ind){

    if(ind >= nums.size()){
        D2.push_back(ds);
        return D2;
    }

    subSets(nums,D2,ds,ind);
    ds.push_back(nums[ind]);
    subSets(nums,D2,ds,ind+1);
    return D2;
}
bool pass (const vector<int> &a,const vector<int> &b){
    if(a.size() != b.size()) return a.size()< b.size();

    return a<b;
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    vector<int> ds;
    vector<vector<int>> D2;
    // subset(nums,0,ds);
    subSet(nums,D2,ds,0);

    sort(D2.begin(),D2.end(),pass);
    
    for(auto i : D2){
       for(auto it : i){
        cout<< it<<" ";
       }
       cout<<endl;
    }

}