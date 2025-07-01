#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin >>vec[i];
    int target;
    cin >>target;
    int count = 0;
    int cnt =0;
        for(int i =0;i<n;i++){
        if(vec[i] == target){
           
            for (int j = i; j < n - count-1; j++)
            {
                swap(vec[j+1],vec[j]);
            }
            count++;

            
        }
    }
    for(int i =1; i< count;i++){
       vec.pop_back();
    };
    for (auto i : vec)
    {
        cout <<i<<" ";
    }
    cout << endl<< count;
  
    
    
}