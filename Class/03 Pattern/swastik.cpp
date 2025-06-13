#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;

    if(n%2 == 0) n = n+1;

    for (int row = 0; row < n; row++)
    {
        // row 0
        if(row == 0){
            for (int i = 0; i < n; i++)
            {
                if(i == 0 || i > ((n+1)/2) -2) cout << "* ";
                else cout <<"  "; 
            }
            
        }
        // row 1
        if(row != 0 && row < n/2){

            for (int i = 0; i < n; i++)
            {
                if( i == 0 || i == n/2) cout <<"* ";
                else cout <<"  ";
            }
            

        }


        // row middle
        else if(row == n/2){
            for (int i = 0; i < n; i++)
            {
               cout << "* ";
            }
            
        }
// row after middle

if(row < n-1 && row > n/2){

    for (int i = 0; i < n; i++)
    {
        if (i == n-1 || i == n/2) cout <<"* ";
        else cout <<"  ";
       
        
    }
    

}

// row end
        else if(row == n-1){
               for (int i = 0; i < n; i++)
            {
                if(i > (n/2) && i != n-1 ) cout << "  ";
                else cout <<"* "; 
            }
            
        }
        cout <<endl;
        }

    }
    
