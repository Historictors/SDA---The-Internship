#include <bits/stdc++.h>
using namespace std;
pair<int,int> binarySearch(vector<int> vec,int target,int n){
    sort(vec.begin(),vec.end());
    

    int i =0;
    int j = n-1;
    int mid = n/2;

    while ( i <= j)
    {
       if(vec[mid] == target){
            return {vec[mid],mid};
       }
       else if(vec[mid] > target){
        j= mid -1;
        mid = (i+j)/2;
       }
       else {
        i=mid+1;
        mid = (i+j)/2;
       }
       
    }
    return {-1,-1};

}
int main()
{
    int n,m;
    cin >>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
// input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
        
    }
    
    int target;
    cin >>target;
    
    int i =0;
    int j = m-1;
    int mid = j/2;
    pair<int,int> val = binarySearch(vec[mid],target,m);

   
    while (i <= j)
    {
       if(val.first == target){
        cout << val.first <<" index " << mid <<" "<<val.second;
        break;
       }
       else if(val.first < target){
            i =mid+1;
            mid = (i+j)/2;
            val = binarySearch(vec[mid],target,m);
       }
       else {
            j = mid -1;
            mid = (i+j)/2;
            val = binarySearch(vec[mid],target,m);
       }
    }

}
