#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a =1234;
    int b =21;

    printf("%5d",b);// fixes 5 spaces , if number have less digits/character moves it to right
     printf("%-5d",b); // fixes 5 spaces , if number have less digits/ charcters moves it to left

     int num =050; //octal number
     int num2 = 0x34; //hexa decimal
     int num3 = 50; //decimal

     printf("%d",sizeof(5.2)); // double
      printf("%d",sizeof(5.2f)); // float
      // %d %o  %f,number systems
    
      // nesting of functions

      printf("\n %d",printf("hello")); // printf() returns number of characters

      // 5.2 != 5.2f  (5.2 is  double,5.2f is float)
      


}