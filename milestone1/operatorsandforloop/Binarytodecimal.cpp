// Given a binary number as an integer N, convert it into decimal and print.

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int r, pow = 1, dec = 0;
	while (n != 0){
		r = n%10;
		dec = dec + r*pow;
		pow *= 2;		
		n = n/10;
	}
	cout<<dec;
}