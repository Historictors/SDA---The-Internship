/*
given a square matrix n*n, if m[i][j] = 1 then i knows j
a celebrity is a person who is known to all but doesn't know anyone
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>> matrix[i][j];
    }
    
   
    for(int i=0;i<3;i++){
        bool flag = true;
        for(int j =0;j<3;j++){
          
            if(i!= j && matrix[i][j] != 0) {
                flag = false;
                break;
            }
        }
        
        if(flag){

            for(int k=0;k<3;k++){
                if( i != k && matrix[k][i] == 0){
                    flag = false;
                }
            }
            cout <<"celebrity :" <<i;
            break;

        }
    }


}