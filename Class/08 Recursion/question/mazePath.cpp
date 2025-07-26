#include <bits/stdc++.h>
using namespace std;

void mazePath(vector<vector<int>> &maze,string path,int &count,int i ,int j){
    int n = maze.size() ;
    int m =maze.size() ;
    if(i >= n || j>= m) return;
    if(i == n-1 && j == m-1) {
        cout<< path<<" ";
        count +=1;
        return;
    }
    
    mazePath(maze,path+'H',count,i,j+1);
    mazePath(maze,path+'V',count,i+1,j);
    mazePath(maze,path+'D',count,i+1,j+1);

}
// not conserding path which passes from a specific element or index
int mazePathFn(vector<vector<int>> &maze,string path,int i ,int j){
  
    if(i >= maze.size() || j>= maze[0].size()) return 0;
    if(i == 1 && j==1 ) return 0;
    if(i == maze.size()-1 && j == maze[0].size()-1) {
        cout<< path<<" ";
        return 1;
    }
    
    int a = mazePathFn(maze,path+'H',i,j+1);
   int b = mazePathFn(maze,path+'V',i+1,j);
   int c= mazePathFn(maze,path+'D',i+1,j+1);

    return a+b+c;
}
int main()
{
    int n;
    cin >>n;
    int count=0;
    vector<vector<int>> maze ={
        {0,0,0},
        {0,1,0},
        {0,0,0}
    };
//   mazePath(maze,"",count,0,0);
  cout<<mazePathFn(maze,"",0,0);
}