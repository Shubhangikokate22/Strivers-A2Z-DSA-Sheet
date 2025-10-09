/*
Problem Statement: Given an array of integers,
rotating array of elements by k elements either left or right.
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5

lets consider right rotation
reverse last k elements
reverse first n-k elements
reverse whole array

dry run
example
N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
reverse last 2 elements
1,2,3,4,5,7,6
reverse first 5 elements
5,4,3,2,1,7,6
reverse whole array
6,7,1,2,3,4,5


*/

#include <bits/stdc++.h>
using namespace std;
void rotate_right(vector<int> &arr, int n, int k)
{
    if (n == 0)
        return;
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
    reverse(arr.begin(), arr.end());
}
void rotate_left(vector<int> &arr, int n, int k)
{
    if (n == 0)
        return;
    reverse(arr.begin(), arr.begin() + k); // in reverse arr.begin()+k is not included
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

/*
complexities
TC:O(N)
SC:O(1)
*/
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    cout << "The original array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    rotate_right(arr, n, 2);
    cout << "The array after right rotation by two places :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    rotate_left(arr, n, 2);
    cout << "The array after left rotation by two places :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}