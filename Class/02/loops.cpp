#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;

    for (int i = 0; i <n; i++)
    {
      cout << i <<" ";
    }
    cout <<endl;

      for (int i = n; i >=0; i--)
    {
      cout << i <<" ";
    }
    cout <<endl;
    
      for (int i = 7; i <n; i++)
    {
      cout << i <<" ";
    }
    cout <<endl;

    int oddSum=0;
    int evenSum =0;

    for (int i = 6; i <n; i++)
    {
        if(i %2 == 0) evenSum += i;
        else oddSum += i;
    }
    cout <<"evenSum " <<evenSum;
    cout <<endl;
    cout << "oddSum " <<oddSum;

 
    
    
}