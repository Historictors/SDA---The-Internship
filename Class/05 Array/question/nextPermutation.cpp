#include <bits/stdc++.h>
using namespace std;
void nextPremu(vector<int> &vec){
       int n =vec.size();
       
       int grater =INT_MAX;
    for(int i=n-1;i>=0;i--){
        if(vec[i-1] < vec[i]){
            
            for(int j =n-1;j>i;j--){
                if(vec[j] > vec[i-1]){
                    grater = j;
                    break;
                }
            }
            swap(vec[grater],vec[i-1]);


            reverse(vec.begin()+i,vec.end());
            break;
        }
    }
    cout << grater<<endl;
}

int main()
{   
    int n;
    cin >>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++) cin >> vec[i];

    nextPremu(vec);
    // next_permutation(vec.begin(),vec.end());

  
    for(auto i:vec) cout<<i<<" ";
//   2 4 5 0 1 7 
/*
6
2 4 1 7 5 0
*/
}/.