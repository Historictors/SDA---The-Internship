#include <bits/stdc++.h>
using namespace std;
bool isWood(vector<int> &tree,int target,int cut){
    int n = tree.size();

    int sum =0;

    for (int i = 0; i < n; i++)
    {
        if(tree[i]-cut){
            sum += tree[i] -cut;
        }
        if(sum >= target) return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<int> tree(n);
    for (int i = 0; i < n; i++) cin >> tree[i];
    int target;
    cin >>target;
    sort(tree.begin(),tree.end());

    int high = n-1;
    int low =0;
    int ans =0;
    while (low <= high)
    {
        int mid = low+(high-low)/2;
        if(isWood(tree,target,mid)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout << ans;
    
    
    

}