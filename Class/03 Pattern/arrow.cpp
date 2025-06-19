#include <bits/stdc++.h>
using namespace std;

int main()
{

        int n;
        cin>>n;
        int c3 =1;
        
       
        for (int row = 1; row <= n; row++)
        {  
            //  int space = 2;
          
          
            int val =row;
            //first and last row
            if(row ==1 || row == n){
                for (int i = 1; i <= (2*n)-1; i++)
                {
                    if(i ==n) cout <<1;
                    else cout << "_";
                }
               
            }
            if(row !=1&& row!= n && row <= (n+1)/2){
                int space = ((2*n-1) -(2*row)-c3)/2;
                for (int i = 1; i <= space; i++)
                {
                    cout <<"_";
                }
                 for (int i = 1; i <= row; i++)
                {
                    cout <<val--;
                }
                 for (int i = 1; i <= c3; i++)
                {
                    cout <<"_";
                }
                 for (int i = 1; i <= row; i++)
                {
                    cout <<++val;
                }
                 for (int i = 1; i <= space; i++)
                {
                    cout <<"_";
                }


                if(row == (n+1)/2) c3 -=2;
               else c3+=2;
                
                
            }
            if(row != n && row > (n+1)/2){
                val = n+1 -row;
                if(space <= 0) space = -space;
                int stars = n+1-row;
                for (int i = 1; i <= space; i++)
                {
                    cout <<"_";
                }
                for (int i = 1; i <= stars; i++)
                {
                    cout <<val--;
                }
                for (int i = 1; i <= c3; i++)
                {
                    cout <<"_";
                }
                for (int i = 1; i <= stars; i++)
                {
                    cout <<++val;
                }
                for (int i = 1; i <= space; i++)
                {
                    cout <<"_";
                }
                c3-=2;
              
                
            }

            cout <<endl;

            // stars = row 
            // left space and right space

            // middle space stars from 1 then +=2
        }
        
}