#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int row = 1; row <= 2*n+1; row++)
    {
        
       
       if(row == n+1){
            int num =n;
     for(int j=1;j<=2*n+1;j++){
            if(j < n+1) cout << num--<<" ";
            else cout << num++<<" ";

     }

            
       }
       else{
                int ro = row;
                if(ro > n+1) ro = 2*n+2 - ro;
        int num =n;
            for(int j=1;j<=ro;j++) cout  <<num-- <<" ";
            for(int j=1;j<=2*(n-ro)+1;j++) cout  <<"  ";
            for(int j=1;j<=ro;j++) cout  <<++num<<" ";
       }
       cout <<endl;
    }

    

}