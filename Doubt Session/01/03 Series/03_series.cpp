#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int sum=0;
    int term;
    for (int i = 1; i <= n; i++)
    {
            if(i%2 !=0) sum+= i;

    }
    cout <<sum;
    
}
