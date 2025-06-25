#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int sum =0;
    int count =0;
    while (n)
    {   sum += (n%10) * pow(2,count);
       n /=10;
        count++;
    }
    cout << sum;
    
}