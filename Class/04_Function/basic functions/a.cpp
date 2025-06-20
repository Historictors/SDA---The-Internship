#include <bits/stdc++.h>
using namespace std;
void fn(){
    int count =0;
    count++;
    cout << count <<" ";
}
void fn2(){
    static int count =0;
    count++;
    cout << count <<" ";
}
int main()
{
    //normal
    fn();
    fn();
    fn();
cout <<endl;
    
    //static
    fn2();
    fn2();
    fn2();
}