// Provided with a random integer array/list(ARR) of size N, you must sort this array using 'Bubble Sort'.
// Note:
// Change in the input array/list itself. You don't need to return or print the elements.

// Example:
// Input: ‘N’ = 7
// 'ARR' = [2, 13, 4, 1, 3, 6, 28]
// Output: [1 2 3 4 6 13 28]
// Explanation: After applying 'bubble sort' on the input array, the output is [1 2 3 4 6 13 28].

// My Code:
void bubbleSort(int arr[], int n){
    int k=0;
    while( k < n-1){    // for n-1 round to sort the array
        for(int i=0;i<n-1;i++){    // for 1 round
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    k++;
  }
}

// Main Code:
#include<iostream>
using namespace std;

#include"solution.h"

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bubbleSort(arr, n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
    return 0;
}