#include <bits/stdc++.h>
using namespace std;

int fibo(int n,int prev =0,int crnt =1,int sum =0){

    for (int i = 2; i <=n ; i++)
    {
          sum = crnt+ prev;
        prev =crnt;
        crnt =sum;
    }
    return sum;
    
}
int main()
{
    int n;
    cin >>n;
   cout << fibo(n);

}