#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
 cin>>n ; 
 for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j<=(n-i);j++){
        cout<<" ";
    }
    for(int k =1;k<=i;k++){
     if((k == n-i && k < 2*n-i) && (i != 1 && i != n) ) cout <<"*";
    else cout << "*";
    }
    
  for(int j= 1 ; j<=(n-i);j++){
    if(j > n-i && j < 2*n-i) cout <<" ";
    else cout << "*";

 }
  for(int k =1; k<=i;k++){
    cout<<" ";
 }
 cout<<endl ;
}
 }
