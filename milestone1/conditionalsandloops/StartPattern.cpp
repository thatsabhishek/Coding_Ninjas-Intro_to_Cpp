// Print the following pattern
// Pattern for N = 4
//     *
//    ***
//   *****
//  *******
// The dots represent spaces.

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int i=1;
	while (i <= n){
		int sp = 1;
		while (sp <= n-i){
			cout<<" ";
			sp = sp+1;
		}
		int j=1;
		while (j <= 2*i-1){
			cout<<"*";
			j = j+1;
		}
		cout<<endl;
		i = i+1;
	}
}


