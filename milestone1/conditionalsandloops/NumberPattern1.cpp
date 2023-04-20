// Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int i=1;
	while (i <= n){
		int j=i;
		while (j <= 2*i-1){
			cout<<j;
			j = j+1;
		}
		cout<<endl;
		i = i+1;
	} 
}