#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vec = {"54","548","546","60"};
    sort(vec.begin(),vec.end(),greater<string>());

    for(auto i : vec) cout<< i;

    
}