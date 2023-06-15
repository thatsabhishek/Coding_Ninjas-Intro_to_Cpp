// You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
// Note:
// Change in the input array/list itself. You don't need to return or print the elements.
// You need to do this in one scan of array only. Don't use extra space.

// Sample Input 1:
// 1
// 7
// 2 0 0 1 3 0 0
// Sample Output 1:
// 2 1 3 0 0 0 0

// My Code:

void pushZeroesEnd(int arr[], int n){
    int count=0;
    for(int i=0; i<n;i++){
        if(arr[i] != 0){
            arr[count] = arr[i];    //count no of non zeros and place them from 0
            count++;
        }
    }
    while(count<n){
        arr[count]=0;    //after countin no. of non zeros copy 0 for rest of the elemnt
        count++;
    }
}

// Main Code:
#include <iostream>
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}