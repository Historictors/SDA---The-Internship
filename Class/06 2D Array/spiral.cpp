#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,m;
    cin >>n>>m;

    vector<vector<int>> arr(n,vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    


    int left =0;
    int right =4;
    int top =0;
    int end =2;

    while(top <= end && right != left )
    {
       for (int j = left; j <= right; j++)
       {
        cout << arr[top][j] <<" ";
       }
       // 1 2 3 4
       top++;
       for (int j = top; j <= end; j++)
       {
        cout << arr[j][right] <<" ";
       }
       // 8 12 16
       right--;

  if(left <= right && top <= end){
         for (int j = right; j >= left; j--)
       {
        cout << arr[end][j]<<" ";
       }
       // 15 14 13
       end--;
       for (int j = end; j >= top; j--)
       {
        cout <<arr[j][left]<<" ";
       }
        left++;
  }
    }
    
    
  
    
    



}