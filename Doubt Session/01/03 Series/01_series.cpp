#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;

    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        int term =i;
        if(i%2 == 0) sum -= i;
        else sum += i;
    }
    cout << sum;

}