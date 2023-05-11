// You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
// Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.
// Note: You need not print the array. You only need to populate it.

// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
// The first and the only line of each test case or query contains an integer 'N'.

// Output Format :
// For each test case, print the elements of the array/list separated by a single space.
// Output for every test case will be printed in a separate line.

//My Code
void arrange(int *arr, int n)
{
 	int i,j=0;
	for(i = 1; i <= n; i++)
	{
		if( i % 2 != 0)
		{
			arr[j] = i;
			j++;
		}
	}
	
	for(i = n ; i > 0;i--)
	{
		if( i%2 == 0)
		{
			arr[j] = i;
			j++ ;
		}
	}
}

// Main Code
#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}