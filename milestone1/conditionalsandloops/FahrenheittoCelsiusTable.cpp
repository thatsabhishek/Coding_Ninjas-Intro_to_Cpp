// Q. Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
// you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

#include<iostream>
using namespace std;

int main() {
	int S, E, W, C;
	cin>>S>>E>>W;
    while (S <= E){
		C = (5*(S-32))/9;
		cout<<S<<" "<<C<<endl;
		S = S+W;
    }
}