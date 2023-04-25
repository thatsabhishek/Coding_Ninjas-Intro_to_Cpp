// Print the following pattern for the given number of rows.
// Note: N is always odd.
// Pattern for N = 5
//     *
//    ***
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while (i <= n/2+1){
        int sp=1;
        while (sp <= n/2+1-i){
            cout<<" ";
            sp++;
        }
        int j=1;
        while (j <= 2*i-1){
            cout<<"*";
            j++;
        }
    cout<<endl;
    i++;
    }
    i=1;
    while (i <= n/2){
        int sp=1;
        while (sp <= i){
            cout<<" ";
            sp++;
        }
        int j=1;
        while (j <= n-2*i){
            cout<<"*";
            j++;
        }
    cout<<endl;
    i++;
    }
}