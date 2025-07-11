

#include<bits/stdc++.h>
using namespace std;
bool is(string str){
	int i=0;
	int j=str.size()-1;
	while(i<=j){
		if(str[i]!=str[j]) return false;
		i++;
		j--;
	}
	return true;
}
int main() {
	string s;
	cin >>s;
	int n =s.size();
	int maxi =0;

	for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            string str;
			for(int k =i;k<=j;k++){
                str+= s[k];
			}
            
			if(is(str)) {
					maxi +=1;
			}
		}
	}
	cout <<maxi;
	return 0;
}