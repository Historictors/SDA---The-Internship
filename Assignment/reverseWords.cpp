#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    vector<string> str;

        string st;
     for(int i=0;i< s.size();i++){
         if(i==0 ) {
             st += s[i];
             
        };
         if(s[i] == '.'){
            str.push_back(st);
            st="";
        }
        if(i == s.size()-1){
            st+='.';
            str.push_back(st);
            st="";
        }
    }
    
    int i=0;
    int j =str.size()-1;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
  
    for(auto i: str) cout << i;


}