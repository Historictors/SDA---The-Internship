#include <bits/stdc++.h>
using namespace std;

// pass by pointers 
void swap(int*p,int*q){
    int temp = *p;
    *p =*q;
    *q =temp;
}
//pass by reffrence
void swap (int &a,int&b){
    int temp =a;
    a=b;
    b =temp;
}

int main()
{
    int a,b;
    cin >>a>>b;
    
    swap(&a,&b);
    cout << a<<" "<<b<<endl;

    swap(a,b);
    cout << a<<" "<<b;
}