#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> & nums,int n){
    bool count=false;
   
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
           if(nums[j] >nums[j+1]){
            swap(nums[i],nums[j+1]);
            count = true;
           }

        }
        if(count == false) break;
    }
    
    
    
    
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) cin >>nums[i];

    bubbleSort(nums,n);
    
    for (auto i : nums)
    {
        cout << i<<" ";
    }
    
    



}