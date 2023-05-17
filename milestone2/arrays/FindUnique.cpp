// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
//  Note: Unique element is always present in the array/list according to the given condition.

//My Code
int findUnique(int *arr, int size)
{
    int count, res;
    for(int i=0; i<size; i++){
        int j= arr[i];
        count = 0;
        for(int k=0; k<size; k++){
            if (arr[k] == j){
                count++;
            }
        }
        if(count == 1){
            res = arr[i];
        }
    }
    return res;
}

// Main Code
#include <iostream>
#include "solution.h"
using namespace std;

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

		cout << findUnique(input, size) << endl;
	}

	return 0;
}

// CN Code
int findUnique(int *arr, int size)
{
    for(int i=0; i<size; i++){
        int j=0;
        for(; j<size; j++){
            if(i != j && arr[i] == arr[j]){
                break;
            }
        }
        if(j == size){
            return arr[i];
        }
    }
}