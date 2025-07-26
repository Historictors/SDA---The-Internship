#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i = 0;i < n ; i++){
        for(int j = 0;j < n;j++){
            cin >> arr[i][j];

        }
    }
   
    int ans;
    for(int i = 0 ; i < n;i++){
        bool flag = false;
        for(int j = 0;j < n;j++){
            if(i != j){
            if(arr[i][j] == 1 && arr[j][i] != 1){
                flag = true;
                ans = j;
            }
            else{
                flag = false;
                ans = -1;
            }
            }
        }
        if(flag){
            break;
        }
    }
    cout << ans;

}