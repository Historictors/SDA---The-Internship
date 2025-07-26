#include <bits/stdc++.h>
using namespace std;
vector<int> ans= {2,3,5,7,11,13,17,19,23,29};


bool check(long long int x){

    if(x==1 || x==0) return false;
    
    for (int i = 0; i < 10; i++)
    {
        if(x== ans[i]) return true;
        if(x % ans[i] == 0) return false;
    }

    return true;
    
}

int main()
{
    string s;
    getline(cin,s);

    vector<int> av(s.size(),1);
    int count =0;

    for (int len = 1; len <= s.size(); len++)
    {
       for (int i = 0; i < s.size()-len; i++)
       {
            string ok = s.substr(i,len);
            long long int x = stoll(ok);
            int edni = i + len -1;

            if(check(x)){
                bool flag = true;
                for (int k = i; k <= edni; k++)
                {
                    if(av[k] == 0) {
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    count++;

                    for(int k = i;k<=edni;k++){
                        av[k] = 0;
                    }
                }
                

            }
       }
       
    }
    cout<< count;
    

}