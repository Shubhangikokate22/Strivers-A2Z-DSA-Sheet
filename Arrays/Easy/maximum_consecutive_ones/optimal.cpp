/*
Problem Statement: Given an array that contains only 1 and 0 return
the count of maximum consecutive ones in the array.

Example 1:
Input: prices = {1, 1, 0, 1, 1, 1}
Output: 3
Approach:
we will traverse from the beginning of the array
if we encounter 1 at that imdex we will increase the count by 1 and update the maximum value
by comparing it with current maximum value and the current count value
else we will set the count to zero
*/
#include <bits/stdc++.h>
using namespace std;
int max_ones(vector<int> &arr, int n)
{
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}

/*
Tc: O(N)
Sc: O(1)
*/
int main()
{
    vector<int> arr = {1, 1, 0, 0, 1, 1, 1, 0, 1};
    int n = arr.size();
    int max_consecutive_ones = max_ones(arr, n);
    cout << "The maximum number of consecutive ones are : " << max_consecutive_ones << endl;
    return 0;
}