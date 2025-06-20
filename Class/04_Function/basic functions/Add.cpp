#include <bits/stdc++.h>
using namespace std;

int add(int num1,int num2)   { 
    return num1+num2;
}

int main()
{
    int a,b;
    cin>>a>>b;
    // int sum =add(a,b);
    // cout <<sum;

    cout <<&a <<endl;
    cout <<&b;
}