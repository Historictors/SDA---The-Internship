#include<iostream>
#include<cmath>
using namespace std;
int Count(int n){
    int d = 0;
    while(n!=0){
        n = n/10;
        d++;
    }
    return d;
}

int Arm(int n,int digit){
    int sum = 0;
    int o = n;
    while(n != 0){
        int rem = n % 10;
        sum += pow(rem,digit);
      
        n =n/10;
    }
    if(sum == o) return true;
    return false ;
}

int main(){
    int n ;
    cin >> n;
    int digit = Count(n);
    
    cout << Arm(n,digit);
}