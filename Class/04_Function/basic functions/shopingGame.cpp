#include <bits/stdc++.h>
using namespace std;
void shopingGame(int M,int N){
      
        bool ayush = true;
        bool lost = false;
       
       for (int j = 1; !lost; j++)
       {
        if(ayush) {
            M -= j;
            if(M <=0){
                lost = true;
                cout << "Harshit"<<endl;
            }
            ayush = false;
        }
        else{
            N -=j;
            if(N <=0){
                lost = true;
                cout << "Aayush"<<endl;
            }
            ayush = true;
        }
       }
}

int main()
{
    int t;
    cin >>t;
    for (int i = 0; i < t; i++)
    {
        int M,N;
        cin >>M>>N; 
        shopingGame(M,N);

    }
    

}