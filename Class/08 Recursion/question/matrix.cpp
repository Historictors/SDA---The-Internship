#include <bits/stdc++.h>
using namespace std;
int fn(vector<vector<int>> & nums,int row,int col){

    if(row == nums.size()-1 && col == nums[0].size()-1) return 1;
    if(row >= nums.size() || col >= nums[0].size())return 0;
    int a = fn(nums,row+1,col);
    int b = fn(nums,row,col+1);

    return a+b;

}

int main()
{
    int n,m;
    cin >>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>> matrix[i][j];
    }

    cout << fn(matrix,0,0);
}