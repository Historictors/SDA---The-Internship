#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
        vector<int> vec(n);

        for (int i = 0; i <n; i++)
        {
            cin >> vec[i]; 
        }
        bool isSorted = false;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n -i-1; j++)
            {
               if(vec[j] > vec[j+1] ) {
                swap(vec[j],vec[j+1]);
                isSorted = true;
               }
            }
            if(!isSorted) break;
            
        }
       
        for (auto i : vec)
        {
          cout << i <<" ";   
        }
        
        
        
}