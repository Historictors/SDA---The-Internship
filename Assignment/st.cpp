#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    int count =1;
    for(int i=0;i<s.size();i++){
        if(i !=s.size() &&s[i]== s[i+1] ) count++;
        else {
            printf("%c",s[i]);
            cout<<count;
            count=1;
        }
    }

    return 0;
}
