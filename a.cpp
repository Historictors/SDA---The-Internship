#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {0,2,4,1,3};
    int brr[5];
    for (int i = 0; i < 5; i++)
    {
        brr[arr[i]] = i;
    }
    for (int i = 0; i <5; i++)
    {
        cout << brr[i]<<" ";
    }
    
    
}