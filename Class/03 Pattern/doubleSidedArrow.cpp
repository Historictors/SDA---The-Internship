#include <bits/stdc++.h>
using namespace std;
class className{ 
  public:
 className(){
  }
};
int main()
{
    int n;
    cin>>n;

    int c1c5 = (n+1)/2;
    int c2c4 = 2;
    for (int row = 1; row <= n; row++)
    {   
        int c3 = (2*n-1)- 2*(c1c5+c2c4);
        if(c3 <=0) c3 = -c3;
        if(row == 1 || row == n){
            for (int i = 1; i <= 2*n-1; i++)
            {
                if(i ==n) cout <<"*";
                else cout <<"_";
            }
            
        }
        
      else if(row <= (n+1)/2){
                     for (int i = 1; i <= (c1c5); i++)
        {
            cout <<"_";
        }
         for (int i = 1; i <= (c2c4); i++)
        {
            cout <<"*";
        }
          for (int i = 1; i <= (c3); i++)
        {
            cout <<"_";
        }
          for (int i = 1; i <= (c2c4); i++)
        {
            cout <<"*";
        }
          for (int i = 1; i <= (c1c5); i++)
        {
           cout<<"_";
        }
        c1c5 -=2;
        c2c4 +=1;
        if(row == (n+1)/2){
            c1c5 == 2;
            c2c4 -=2;
        }

       }
    //    else  {
    //         for (int i = 1; i <= c1c5; i++)
    //         {
    //            cout <<"_";
    //         }
    //         for (int i = 1; i <= c2c4; i++)
    //         {
    //             cout <<"*";
    //         }
    //          for (int i = 1; i <= c3; i++)
    //         {
    //             cout <<"_";
    //         }
    //          for (int i = 1; i <= c2c4; i++)
    //         {
    //             cout <<"*";
    //         }
    //          for (int i = 1; i <= c1c5; i++)
    //         {
    //             cout <<"_";
    //         }

    //         c1c5 +=2;
    //         c2c4 -=1;
            
            
    //    }
      
        
       cout <<endl;
    }
    
}