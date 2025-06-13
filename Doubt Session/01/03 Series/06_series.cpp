#include <bits/stdc++.h>
using namespace std;

int fact (int num){

    if(num ==1) return 1;
    return num * fact(num-1);

}
int main()
{
    int n;
    cin >>n;
    float sum=0,term;

    for (int i = 1; i <= n; i++)
    {
        term = (float)1/fact(i);
        sum += term;
        
    }
    cout << sum;
    
    
}