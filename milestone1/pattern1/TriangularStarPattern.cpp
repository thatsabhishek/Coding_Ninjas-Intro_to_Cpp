// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// *
// **
// ***
// ****
// Note : There are no spaces between the stars (*).

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int i=1;
	while (i <= n){
		int j=1;
		while (j <= i){
			cout<<'*';
			j++;
		}
		cout<<endl;
		i++;
	}
}