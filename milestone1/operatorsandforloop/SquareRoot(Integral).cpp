// Given a number N, find its square root. You need to find and print only the integral part of square root of N.
// For eg. if number given is 18, answer is 4.

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int sq = sqrt(n);
	cout<<sq;
}

/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int output = 0;
    while(output * output <= n) {
        output = output + 1;
    }
    output = output - 1;
    cout << output;
}
*/