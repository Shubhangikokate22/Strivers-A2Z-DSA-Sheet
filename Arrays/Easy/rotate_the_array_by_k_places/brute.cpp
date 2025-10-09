/*
Problem Statement: Given an array of integers,
rotating array of elements by k elements either left or right.

Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5

lets consider right rotation
brute force approach
copy the last k element in temp array
shift the n-k elements from beginning by k position to the right
copy the element from the temp array to the main array

for left rotatation
brute force approach
copy the first k elements in a temp array
shipt the next n-k elements to the left by k position
copy the elements from the temp array to the main array


*/

#include <bits/stdc++.h>
using namespace std;
// right rotation brute
void right_rotate(vector<int> &arr, int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    int temp[k];
    for (int i = n - k; i < n; i++)
    {
        temp[i - n + k] = arr[i];
    }
    for (int i = n - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}
// left rotation brute
void left_rotate(vector<int> &arr, int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - n + k];
    }
}

/*
complexities
TC: O(N)
SC: O(K)
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
    right_rotate(arr, n, 2);
    cout << "The array after right rotation by two places :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    left_rotate(arr, n, 2);
    cout << "The array after left rotation by two places :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}