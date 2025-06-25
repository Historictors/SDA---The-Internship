#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> & nums,int n){
     
    for (int i = 1; i < n; i++)
    {
       for (int j = 0; j < i; j++)
       {
            if(nums[j] > nums[i]){
                swap(nums[j],nums[i]);
                break;
            }
       }
       
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) cin >>nums[i];

    insertionSort(nums,n);
    
    for (auto i : nums)
    {
        cout << i<<" ";
    }
    
    



}