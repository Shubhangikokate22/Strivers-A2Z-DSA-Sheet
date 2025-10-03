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
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int didSwap=0;
for(int i=0; i<=n-2; i++)
{
    if(n==1) return;
    if(arr[i]>arr[i+1])
    {
        //swap them
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        didSwap = 1;

    }
     if (didSwap == 0) return;
    bubble_sort(arr,n-1);
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
    bubble_sort(arr, n);
     cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
   
}
/*
Time Complexity: O(N^2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.
Space Complexity: O(N) auxiliary stack space.
*/