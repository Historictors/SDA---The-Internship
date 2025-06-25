#include <iostream>
using namespace std;

int count(int n){
    int digit =0;
    while(n>0){
        digit++;
        n = n/10;
    }
    return digit;
}

int  print_prime_factors(int n ){
    int sum =0;
    while(n%2==0){
        // cout << 2 << " ";
        sum += 2;
        n = n/2;
    }
    for(int i =3; i*i<=n; i+=2){
        while(n%i==0){      
            // cout << i << " ";
            sum += count(i);
            n = n/i;
        }
        if(n>2){
            sum += n;
        }
    }
    return sum;
    // all prime factors get printed.
}
int main() {
    int n;
    cin >> n;
    int nn = n, nnn=n;
   int x = print_prime_factors(n);
   
   int y = count(nn);
   cout << x << y <<endl;
   
   int ans = (x==y)?1:0;
   cout << ans;
    return 0;
    
    
}