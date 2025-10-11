/*
Problem Statement: Given an integer N and an array of size N-1 containing N-1 
numbers between 1 to N. Find the number(between 1 to N),
that is not present in the given array.

For each number between 1 to N, we will try to find it in the given array 
using linear search. And if we don’t find any of them, we will return the number.


*/
#include<bits/stdc++.h>
using namespace std;
int find_missing(vector<int> &arr, int n)
{
    for(int i=1; i<=n ; i++)
    {
        int flag=0;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) return i;

    }
    return -1;
}
/*
complexities
Time Complexity: O(N2), where N = size of the array+1.
Reason: In the worst case i.e. if the missing number is N itself, the outer loop will run 
for N times, and for every single number the inner loop will also run for approximately N times.
So, the total time complexity will be O(N2).
Space Complexity: O(1)  as we are not using any extra space.
*/
int main()
{
    int N = 5;
    vector<int> arr = {1, 2, 4, 5};
    int ans = find_missing(arr, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
   
