// You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. 
// Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.
// Note: You need to change in the given array/list itself. 
//       Hence, no need to return or print anything. 

// My Code 
void sortZeroesAndOne(int *input, int size)
{
   int zero = 0;
   for (int i=0; i<size; i++){
       if (input[i] == 0){
           int temp = input[zero];
           input[zero] = input[i];
           input[i] = temp;
           zero++;
       }
   }
}

// Main Code
#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}