#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin >>n;
        vector<int> v(n);
        int product =1;
        int count=0;
        for(int i =0;i<n;i++){
             cin >> v[i];
             if(v[i] != 0 && count >=0) product *= v[i];
             if(v[i] == 0)  count++;
             
        }
        for(int i =0;i<n;i++){
            if(count >= 2) v[i] =0;
           else if(count ==1) {
                if(v[i] == 0) v[i]= product;
                else v[i] =0;
            }
            else v[i] = product/v[i];
        }

        for(int i =0;i<n;i++) cout << v[i]<<' ';
  
        
}