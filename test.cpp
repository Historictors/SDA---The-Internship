#include<bits/stdc++.h>
using namespace std;
int factorial (int Number){

            int product =1;
        for (int i = 1; i <= Number; i++)
        {
            product = product*i;
        }
     
            return product;
}

int nCr (int n, int r){
         if ((n == 0 && r ==0) || (n==1 && r ==1))
         {
           return 1;
         }
         else {
         float x = factorial(n);
         float y = factorial(r);
         float z = factorial(n-r);

          float Ans = x/(y*z) ;

          return (int)Ans;}
} 
int main(){

 int row;
      cin >> row;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                int element = nCr(i,j);
                cout <<element<<"\t";
                
            }
           cout <<endl;
            
        }
        


return 0;
}