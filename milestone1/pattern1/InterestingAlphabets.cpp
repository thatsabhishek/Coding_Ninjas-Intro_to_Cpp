// Print the following pattern for the given number of rows.
// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while (i <= n){
        char s = 'A'+n-i;
        int j=1;
        while (j <= i){
            char ch = s+j-1;
            cout<<ch;
            j++;
        }
    cout<<endl;
    i++;
    } 
}
