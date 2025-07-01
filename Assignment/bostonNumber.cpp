#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
vector<int> isBoston(int n)
{
    int ans = 0;
    vector<int> v;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            // check 'i' and n/i is prime or not
            int val = n;
            if (isPrime(i))
            {

                while (val % i == 0)
                {
                    if (i >= 10) v.push_back(sumOfDigits(i));
                    
                    else v.push_back(i);
                    
                    val /= i;
                }
            }
        }
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    int sum = sumOfDigits(n);
    vector<int> v = isBoston(n);
    int ans = 0;
    for (auto i : v)
    {
        ans += i;
    }
    if (ans == sum)
        cout << true;
    else
        cout << false;
}