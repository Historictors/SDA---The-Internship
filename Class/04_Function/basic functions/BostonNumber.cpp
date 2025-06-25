#include <bits/stdc++.h>
using namespace std;

int digits(int n){
        int sum =0;
    while (n)
    {   
        int digi = n%10;
        sum += digi;
        n /=10;
    }

    return sum;
    
}
int isPrime(int n){
    for (int i = 2; i < n/2; i++)
    {
        if(n%i == 0) {
                return false;

        }
    }

    return true;
    
}

vector<int> factors(int n){
    vector<int> vec;

    for (int i = 2; i < n/2; i++)
    {int num =n;
       if(n% i ==0){
          if(isPrime(i)) {

            while (num% i == 0)
            {
               vec.push_back(i);
               num /= i;
            }
            

          }
       }
    }
    return vec;
    
}

// int isBoston(int n){

    
// }

int main()
{
    int n;
    cin >>n;

    int originalDigi= digits(n);
    
    vector<int> v =factors(n);
    
  
  int sum =0;
    for (auto i : v)
    {
        sum += digits(i);
    }
    if(sum == originalDigi) cout << "True";
    else cout <<"False";
    


}

