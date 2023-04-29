// Write a program that asks the user for a number N and a choice C. 
// And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)

#include<iostream>
using namespace std;

int main() {
	int n, c;
	cin>>n;
    // 1 for sum from 1 to n
	// 2 for product from 1 to n
	cin>>c;

	if (c == 1){
		int sum = 0;
		for (int i = 0; i <= n; i++)
			sum += i;
		cout<<sum<<endl;
	}
	else if (c == 2){
		int pro = 1;
		for (int j = 1; j <= n; j++)
			pro *= j;
		cout<<pro<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}
