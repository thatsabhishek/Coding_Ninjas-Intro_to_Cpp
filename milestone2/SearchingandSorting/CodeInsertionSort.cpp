// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
// Note:
// Change in the input array/list itself. You don't need to return or print the elements.

// Sample Input 1:
// 1
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 1 2 3 4 6 13 28

// My Code:
void insertionSort(int arr[], int n){
	// Write your code here
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for( j = i-1; j >= 0;j--){
            if(current < arr[j]){
                arr[j+1]=arr[j];    // shifting by 1 position
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
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
		int input[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
	}

	return 0;
}