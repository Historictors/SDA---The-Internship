#include <bits/stdc++.h>
using namespace std;

int add(int num1,int num2,int num3)   { 
    return num1+num2+num3;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum =add(a,b,c);
    cout <<sum;
}