#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int sum=0;
    bool flag = true;
    
    for (int i = 1; i <= 2*n; i++)
    {
            if(i%2 !=0) {

                if(flag) {
                    sum += i;
                    flag = false;
                }
                else{
                     sum -=i;
                     flag = true;
                }

            }

    }
    cout <<sum;
    
}
