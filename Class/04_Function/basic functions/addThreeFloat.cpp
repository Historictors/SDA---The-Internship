#include <bits/stdc++.h>
using namespace std;

float add(float num1,float num2,float num3)   { 
    return num1+num2+num3;
}

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float sum =add(a,b,c);
    cout <<sum;
}