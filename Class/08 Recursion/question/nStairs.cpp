#include <bits/stdc++.h>
using namespace std;

int nStairs(int n,int i =0){
    if(i ==n){
        return 1;
    }
    if(i >n) return 0;
  int ans =  nStairs(n,i+1) + nStairs(n,i+2);

  return ans;
   
}

int main()
{
    int n;
    cin >>n;
   cout << nStairs(n);

}