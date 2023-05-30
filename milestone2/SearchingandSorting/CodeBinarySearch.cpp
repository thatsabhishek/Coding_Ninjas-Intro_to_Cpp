// You are given an integer array 'A' of size 'N', sorted in ascending order. You are also given an integer 'target'.
// Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. Otherwise, return -1.

// Note: You must write an algorithm whose time complexity is O(logN).

// Example:
// Input: ‘N’ = 7 ‘target’ = 3
// ‘A’ = [1, 3, 7, 9, 11, 12, 45]

// Output: 1

// Explanation: For A = [1, 3, 7, 9, 11, 12, 45],
// The index of element '3' is 1.
// Hence, the answer is '1'.

// My Code:
int search(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;

    while (start <= end){
        int mid = (start+end)/2;
        if (nums[mid] == target)
            return mid;
        else if(target < nums[mid])
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}

// Main Code:
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#include "solution.h"


class Runner
{
    int t = 1;
    
    vector<int> v;
    int x;
    
public:
    void takeInput()
    {
        int n; cin >> n;
        assert(1 <= n && n <= (int)1e4);
        v.assign(n, 0);
        for(int i = 0; i < n; ++i) cin >> v[i];
        cin >> x;
    }
    void execute()
    {
        vector<int> copy = v;
        search(copy, x);
    }

    void executeAndPrintOutput()
    {
        vector<int> copy = v;
        int ans = search(copy, x);
        cout << ans << '\n';
    }
};

int main()
{
    // freopen("./Testcases/large/in/input11.txt", "r", stdin);
    // freopen("./Testcases/large/out/output11.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
