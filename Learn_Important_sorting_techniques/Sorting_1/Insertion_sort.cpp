/*
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Take the element and place it in its corret order

Dry run

13,46,24,52,20,9
outer loop iteration -1
13,46,24,52,20,9

outer loop iteration -2
13,46,24,52,20,9

outer loop iteration -3
13,46,24,52,20,9
13,24,46,52,20,9

outer loop iteration -4
13,24,46,52,20,9

outer loop iteration -5
13,24,46,52,20,9
13,24,46,20,52,9
13,24,20,46,52,9
13,20,24,46,52,9

outer loop iteration -6
13,20,24,46,52,9
13,20,24,46,9,52
13,20,24,9,46,52
13,20,9,24,46,52
13,9,20,24,46,52
9,13,20,24,46,52

Approach:

Select an element in each iteration from the unsorted array(using a loop).
Place it in its corresponding position in the sorted part and shift the remaining elements accordingly (using an inner loop and swapping).
The “inner while loop” basically shifts the elements using swapping.
*/

#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    cout << "The sorted list is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "List before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertion_sort(arr, n);
    return 0;
}
