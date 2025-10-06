/*Problem Statement: Given an array of size n, write a program to check if the given array is sorted in 
(ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True,
Else return False.
Approach (Efficient – Single Traversal):
For a sorted array, every previous element is smaller than or equal to the current one.
We check each element with its previous; if arr[i-1] ≤ arr[i] for all i, the array is sorted.
If the array has 0 or 1 element, it’s also considered sorted.
If any element violates the condition, return False; otherwise, return True.

*/
#include<bits/stdc++.h>
using namespace std;
bool is_sorted(vector <int> &arr)
{
    for(int i=1; i<arr.size();i++)
    {
        if(arr[i-1]<=arr[i])
        {

        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    vector <int> arr={1,3,4,7,9,29};
    vector<int> arr2={2,1,8,0,4};
     printf("%s\n", is_sorted(arr) ? "True" : "False");
     printf("%s\n", is_sorted(arr2) ? "True" : "False");
    return 0;
} 
/*
Complexity Analysis
Time Complexity: O(N)
Space Complexity: O(1)
*/