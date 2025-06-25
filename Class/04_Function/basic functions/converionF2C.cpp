#include <bits/stdc++.h>
using namespace std;

int covert(int n){
    
    float celcius = (5.0/9)*(n-32);
    return celcius;
}
int main()
{
    int min,max,step;
    cin >>min>>max>>step;
    int val =min;
   
    for (int i = 0; i <= (max/step); i++)
    {
        if(val > max)break;

     
        cout <<val <<"\t"<<covert(val);
        val +=step;
      cout <<endl;

    }
  
    
}