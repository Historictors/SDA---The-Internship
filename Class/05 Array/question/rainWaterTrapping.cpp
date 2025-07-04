#include <bits/stdc++.h>
using namespace std;
int rainWater(vector<int> & height){
    int n = height.size();
        if(n==1 || n==2)return 0;

    vector<int> lmax(n);
    vector<int> rmax(n);

    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        if(max <= height[i-1]){
            max = height[i-1];
            lmax[i] = max;
        }
        else if(i!=0) lmax[i] =max;
    }

    max = INT_MIN;

     for (int i = n-2; i >= 0; i--)
    {
        if(max <= height[i+1]){
            max = height[i+1];
            rmax[i] = max;
        }
        else if(i!=n-1) rmax[i] =max;
    }
    
    int ans =0;
    int val =0;
    for(int i =0;i <n;i++){
        ans = min(lmax[i],rmax[i]) - height[i];
        if(ans > 0) {
            val += ans;
        }
    }
    for (auto i : rmax)
    {
     cout << i<<" ";   
    }
    
    return val;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];

   rainWater(v);
    // cout << val;
    // return val;
   

}