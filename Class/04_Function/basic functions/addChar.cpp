#include <bits/stdc++.h>
using namespace std;

 string add(string num1,string num2)   { 

     string s = num1 + num2;

    return s;

}

int main()
{
    string a,b;
    cin>>a>>b;
    string sum =add(a,b);
    cout << sum;
}