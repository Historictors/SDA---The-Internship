#include <bits/stdc++.h>
using namespace std;
 bool isIsomorphic(string s, string t){
        if(s.size() != t.size()) return false;
        map<char,char> mpp;
        for(int i =0;i<s.size();i++){
            mpp[s[i]] = t[i];
        }
        // for(auto it : mpp){
        //     cout<< it.first <<" -> "<<it.second<<endl;
        // }

        for(auto i =0;i<s.size();i++){
          for(int j=1;j<s.size();j++) {
            //  if(i!=j){
            //      if(mpp[s[i]] == mpp[s[j]]){
            //         cout<< s[i]<<" "<<s[j]<<endl;
            //      }
                    
                 
            //  }
            cout<< i<<" "<<j<<endl;
          }
        }
        return true;
    }

int main()
{
   cout<< isIsomorphic("egg","add");

}