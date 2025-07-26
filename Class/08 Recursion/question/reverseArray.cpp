#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &nums,int i,int j){
    if(i>=j) return;
    swap(nums[i],nums[j]);
    rev(nums,++i,--j);
}
bool isPalli(vector<int> & nums,int i, int j){
    if(i >=j) return true;
    if(nums[i] != nums[j]) return false;

   return isPalli(nums,++i,--j);

}
int main()
{
    vector<int> nums ={1,2,2,1};

    // rev(nums,0,nums.size()-1);
    cout<< isPalli(nums,0,nums.size()-1);
    // for(auto i : nums) cout<< i <<" ";

}