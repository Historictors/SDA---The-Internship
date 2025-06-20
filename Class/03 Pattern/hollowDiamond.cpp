#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int var = (n-1)/2;
    for (int row = 1; row <= n; row++)
    {
        if(row ==1 || row == n){
            for (int i = 1; i <=n ; i++){
                cout<<"*\t";
            }
        }
        else if(row <= (n+1)/2){
                 for (int i = 1; i <=var ; i++){
                cout<<"*\t";
            }
             for (int i = 1; i <=n-2*var ; i++){
                cout<<"\t";
            }
             for (int i = 1; i <=var ; i++){
                cout<<"*\t";
            }
            var--;
            if(var == 0)var=2;
        }
        else {
                 for (int i = 1; i <=var ; i++){
                cout<<"*\t";
            }
             for (int i = 1; i <=n-2*var ; i++){
                cout<<"\t";
            }
             for (int i = 1; i <=var ; i++){
                cout<<"*\t";
            }
            var++;
        }
        cout <<endl;
    }
    

}