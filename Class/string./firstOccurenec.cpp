#include <bits/stdc++.h>
using namespace std;
   int firstUniqChar(string s) {
        vector<int> hashMap(26);
        for(int i =0;i< s.size();i++){
            hashMap[s[i]-'a'] += 1;
        }
        int index = INT_MAX;
        for(int i =0;i< hashMap.size();i++){
            if(hashMap[i]== 1){
                for(int j=0; j<s.size();j++){
                    if(char(hashMap[i] +'a')  == s[j]) index = min(index,j);
                }
            }
        }
        if(index = INT_MAX) return -1;
        return index;
    }
int main()
{
    string s = "leetcode";
    //    vector<int> hashMap(26);

    //    int minn = INT_MAX;
    //     for(int i =0;i< s.size();i++){
    //         hashMap[s[i]-'a'] += 1;
    //     }

    //     for(int i =0;i<26;i++){
    //         if(hashMap[i] == 1) {
    //             for (int j = 0; j < s.size(); j++)
    //             {
    //                if(char ('a'+i) == s[j]) minn = min(minn,j);
    //             }
                
    //         }
    //     }
    //     cout << minn;
        // for(auto i: hashMap) cout << i<<" ";
      
}