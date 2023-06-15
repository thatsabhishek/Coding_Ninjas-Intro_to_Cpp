// You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list.
// Sample Input 1:
// 5
// 4 3 10 9 2
// Sample Output 1:
// 9

// My Code:
int findSecondLargest(int arr[], int n)
{
    //Write your code here
}
int findSecondLargest(int arr[], int n){
    long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(arr[i] == arr[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max){
			    max = arr[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max && arr[i] != temp){
			    max = arr[i];
		    }
	    }
        return max;
	}
}

// Main Code:
#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}
