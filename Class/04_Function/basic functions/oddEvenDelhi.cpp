#include <bits/stdc++.h>
using namespace std;

void oddEven(int carNum){
    int evenSum=0,oddSum=0;

    while (carNum)
    {
        int digit = carNum%10;
     if(digit % 2 == 0) evenSum += digit;
     else oddSum += digit;
     carNum /= 10;  
    }
    
    if(evenSum % 4 == 0 || oddSum % 3 == 0) cout << "Yes";
    else cout<< "No" ;
    

}

int main()
{
    int n;
    cin >>n;

    for (int i = 0; i < n; i++)
    {
        int carNum;
        cin >> carNum;

       oddEven(carNum);
    }
    

}