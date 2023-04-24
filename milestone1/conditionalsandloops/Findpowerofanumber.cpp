// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. 
// You need to print the answer.
// Note : For this question, you can assume that 0 raised to the power of 0 is 1

#include<iostream>
using namespace std;

int main() {
	int x, n, res = 1, i=1;
	cin>>x>>n;
	if (n == 0)
	    res = 1;
	else{
		while (i<=n){
			res *= x;
			i += 1;			
		}
	}
	cout<<res<<endl;
}
