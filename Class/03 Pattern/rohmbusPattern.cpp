#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    cin >>n;

    for (int row = 0; row < n; row++)
    {
        int start = n-2-row;
        int end = 2*n -1 -row;
        for (int col = 0; col < (2*n-1); col++){
            

            if(row == 0){
                    if(col < n-1) cout << " ";
                    else cout << "*";
            }
            else if(row == n-1){
                if(col <= n-1) cout << "*";
                else cout << " ";
            }
            else {
                    if(col < start) cout << " ";
                    if(col == start || col == end) cout << "*";
                    if(col > start && col < end) cout << " ";

            }

        }
        cout << endl;
        
    }
    


}