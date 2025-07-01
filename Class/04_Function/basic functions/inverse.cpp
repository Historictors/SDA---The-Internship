#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >>n;
	int count =0;
	int num =n;
	while(n){
		n/=10;
		count++;
	}
    
	vector<int> v;

	for(int i =0; i<count;i++){
		v.push_back(num%10);
		num /=10;
	}
	vector<int> vec(count);
    
    for (int i = 1; i <= count; i++)
    {
       vec[v[count -i]-1] =i;
    }
    for (auto i : vec)
    {
        cout <<i <<" ";
    }
    

    
    
    
    
 
	return 0;
}