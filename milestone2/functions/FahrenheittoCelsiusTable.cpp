// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
// you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

/*Main code 
 
#include<iostream>
using namespace std;
#include "Solution.h"

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}
*/

// code
void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    while (start <= end){
        int cel = (5*(start-32))/9;
        cout<<start<<" "<<cel<<endl;
        start+=step; 
    }
}


