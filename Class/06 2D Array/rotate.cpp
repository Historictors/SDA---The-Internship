#include <bits/stdc++.h>
using namespace std;
 void rotate(vector<vector<int>>& matrix) {
       int n = matrix.size();
    for(int row =0;row <= n/2;row++){

        for(int col =row;col <n;col++){
            swap(matrix[row][col],matrix[col][row]);
              for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] <<" ";
        }
        cout <<endl;
        
    }
    cout <<endl;
        }
    }
    for(int i=0;i<n;i++){

        reverse(matrix[i].begin(),matrix[i].end());
    }
    }
int main()
{
  int n;
    cin >>n;

    vector<vector<int>> arr(n,vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    rotate(arr);
    

    //  for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] <<" ";
    //     }
    //     cout <<endl;
        
    // }
}
/*
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25
*/