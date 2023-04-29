// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

#include<iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int count = 0, n = 1;
	while (count != x){
		int eq = 3*n+2;
		if (eq % 4 != 0 ) {
			cout << eq << " ";
			count++;
		}
	n++;
    }
}
