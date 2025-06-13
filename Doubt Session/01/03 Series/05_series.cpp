#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    float sum=0,term;

    for (int i = 1; i <= n; i++)
    {
        term = (float)1/i;
        sum += term;
        
    }
    cout << sum;
    
}