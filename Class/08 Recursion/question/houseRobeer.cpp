#include <bits/stdc++.h>
using namespace std;
int houseRobber(vector<int> &house,int n,int i){
     
    if(i > n) return 0;
    if(i == n ) return house[i];

    int a = houseRobber(house,n,i+1);
    int b = house[i] + houseRobber(house,n,i+2);

    return max(a,b);
}
// 

int main()
{
    vector<int> house ={114,117,207,117,235,82,90};
    int n =house.size();

   cout << houseRobber(house,n-1,0);

}