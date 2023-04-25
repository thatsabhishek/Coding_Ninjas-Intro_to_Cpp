// Print the following pattern
// Pattern for N = 4
//     *
//    ***
//   *****
//  *******

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int i=1;
	while (i <= n){
		int sp=1;
		while (sp <= n-i){
			cout<<" ";
			sp++;
		}
		int j=1;
		while (j <= 2*i-1){
			cout<<"*";
			j++;
		}
	cout<<endl;
	i++;
	}
}