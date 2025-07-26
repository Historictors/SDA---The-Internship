#include <bits/stdc++.h>
using namespace std;
int fn (vector<vector<int>> &matrix,int row,int col,string ds){
    int n = matrix.size();
    int m = matrix[0].size();
    if(row > n-1 || col > m-1) return 0;
    if(row = n-1 && col == m-1){
        cout<< ds<<endl;
        return 0;
    }

  
    fn(matrix,row,col+1,ds+'R');
    fn(matrix,row+1,col+1,ds+'D');
    fn(matrix,row+1,col,ds+'V');

    return 0;

}
int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    // fn(matrix,0,0,"");
    

}
// HOMEWORK
/*
minimum sum
maximum sum
end point not fixed
start & end point not fixed
*/