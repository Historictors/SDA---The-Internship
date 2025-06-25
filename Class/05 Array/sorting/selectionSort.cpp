#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> & nums,int n){
 
   int min = INT_MAX;
   int minIndex;
    for (int i = 0; i < n-1; i++)
    {
       
       for (int j = i+1; j < n; j++)
       {
             if(min > nums[j]){
                min = nums[j];
                minIndex = j;
       }
    } 
        swap(nums[i],nums[minIndex]);
       
       
       
    }
    
    
    
    
    
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) cin >>nums[i];

    selectionSort(nums,n);
    
    for (auto i : nums)
    {
        cout << i<<" ";
    }
    
    



}