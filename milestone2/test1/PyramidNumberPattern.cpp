// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// Input format : N (Total no. of rows)

// Output format : Pattern in N lines

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while (i <= n){
        int sp=1;
        while (sp <= n-i){
            cout<<" ";
            sp++;
        }
        int j=1;
        int k=i;
        while (j <= i){
            cout<<k;
            k--;
            j++;
        }
        int l = 2;
        while (l <= i){
            cout<<l;
            l++;
        }
    cout<<endl;
    i++;
    }
}
