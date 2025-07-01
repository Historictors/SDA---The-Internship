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
        mid = i+(i+j)/2;
       }
       else {
        i=mid+1;
        mid = i+(i+j)/2;
       }
       
    }
    return {-1,-1};

}

int main()
{
    int n;
    cin >>n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    int target;
    cin >>target;
   cout << binarySearch(vec,target,n).first;

    
    
    
    
    
}