#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin >> vec[i];

    int money;
    cin >> money;

    sort(vec.begin(),vec.end());
    

    int low=0;
    int high =n-1;
    int sum =0;
    pair<int,int> ans = {0,INT_MAX};
    int pairDiff=ans.second - ans.first;
  
    while (low <=high)
    {
        sum = vec[low]+ vec[high];
        if(sum == money ){
           
            int diff = vec[high] -vec[low];

            if( diff < pairDiff ){
                ans.first = vec[low];
            ans.second = vec[high];
        
            pairDiff = ans.second - ans.first;
            high--;
            low++;
            }
            
        }
        else if(sum > money){
            high--;
        }
        else if(sum < money) low++;
    }
    // cout << ans.first <<" "<<ans.second;
    

}