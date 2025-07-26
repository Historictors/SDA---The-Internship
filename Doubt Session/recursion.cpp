#include <bits/stdc++.h>
using namespace std;
int fibbo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int a = fibbo(n - 1);
    int b = fibbo(n - 2);
    return a + b;
}

int main()
{

    int n;
    cin >> n;

    cout << fibbo(n);
}