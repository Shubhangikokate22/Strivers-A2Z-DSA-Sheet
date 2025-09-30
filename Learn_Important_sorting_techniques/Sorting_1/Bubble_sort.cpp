/*
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52

Bubble Sort
Push the max to the last by adjacent swaps
Dry run
13,46,24,52,20,9

13,46,24,52,20,9
13,24,46,52,20,9
13,24,46,52,20,9
13,24,46,20,52,9
13,24,46,20,9,52 --->PASS 1

13,24,46,20,9,52
13,24,46,20,9,52
13,24,20,46,9,52
13,24,20,9,46,52 --->PASS 2

13,24,20,9,46,52
13,20,24,9,46,52
13,20,9,24,46,52 --->PASS 3

13,20,9,24,46,52
13,9,20,24,46,52 --->PASS 4

9,13,20,24,46,52 --->PASS 5
*/
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The sorted list is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
/*
The time complexity for the above function is O(n^2) in all the cases 
Space complexity =O(1)
*/ 

// Optimized approach
/*
The best case occurs if the given array is already sorted. We can reduce the time complexity to O(N) by just adding a small check inside the loops.
We will check in the first iteration if any swap is taking place. If the array is already sorted no swap will occur and we will break out from the loops.
Thus the iteration of the outer loop will be just 1. And our overall time complexity will be O(N).
*/
void bubble_sort_optimized(int arr[], int n)
{

    for (int i = n - 1; i > 0; i--)
    {
        int did_swap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                did_swap = 1;
            }
        }
        if (did_swap == 0)
            break;
    }
    cout << "The sorted list by the optimized approach is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
Time complexity for worst and average cases is O(N^2)
and O(N) for the best case scenario

space complextity =O(1)
*/

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
    bubble_sort(arr, n);
    bubble_sort_optimized(arr,n);
    return 0;
}
