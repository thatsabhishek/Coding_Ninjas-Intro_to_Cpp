// Given a number N, figure out if it is a member of fibonacci series or not. 
// Return true if the number is member of fibonacci series else false.
// Fibonacci Series is defined by the recurrence
//     F(n) = F(n-1) + F(n-2)
// where F(0) = 0 and F(1) = 1

/* Main Code
#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
}
*/

// Code


bool checkMember(int n){
  
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */

    int a=0, b=1, sum=0;
    while (sum<=n){
      sum = a+b;
      if (sum == n)
        return  true;
      a = b;
      b = sum;
    }
  return false;
}
