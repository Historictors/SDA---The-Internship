#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int sum=0;
    
    for (int i = 1; i <= n; i++)
    {
        int term =0;
        if(i % 2 == 0) term = -(i*i);
        else term = (i*i);

        sum+= term;



    }
    cout <<sum;
    
}
