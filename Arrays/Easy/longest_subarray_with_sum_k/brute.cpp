/*
Given an array and a sum k, we need to print the length of the
longest subarray that sums to k.

Approach 
we will generate all the possible subarray and find its sum according we will update the
longest subarray lenght

two pointers i and j will be used
outer loop will run from i =0 to i=n-1
inner loop will run from j=i to j=n-1
each time in the inner loop we will be updating the sum 
when the sum is equal to the required sum the length will be updated accordingly

*/

#include<bits/stdc++.h>
using namespace std;

int longest_subarr(vector <int> &arr , int n , int k)
{
 int sum=0 , lenght =0;
for ( int i = 0; i < n; i++)
{
    for(int j= i; j < n; j++)
    {
        sum+=arr[j];
        if(sum==k)
        {
            lenght=max(lenght, j-i+1);
        }
    }  
}

return lenght;
}
// Time Complexity: O(N2) approx., where N = size of the array.
// Reason: We are using two nested loops, each running approximately N times.
// Space Complexity: O(1) as we are not using any extra space.
int main()
{

    vector<int> arr = {2, 3, 4, 1, 9};
    int k = 10;
    int n=arr.size();
    int len = longest_subarr(arr,n, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
    return 0;
}