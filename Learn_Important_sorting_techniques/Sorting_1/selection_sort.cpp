/*
select the minimum and swap it
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52

dry run
13,46,24,52,20,9
9,46,24,52,20,13  Step 1
9,13,24,52,20,46  step 2
9,13,20,52,24,46  step 3
9,13,20,24,52,46  step 4
9,13,20,24,46,52  step 5

observation
swap at index 0 and min index[0 to n-1]
swap at index 1 and min index[1 to n-1]
swap at index 2 and min index[2 to n-1]
upto
swap at index n-2 and min index [n-2, n-1]
*/
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    int min = 0, temp = 0;
    for (int i = 0; i <= n - 2; i++)
    {

        min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr, n);

    return 0;
}
//  Complexities
/*
n+ (n-1) + (n-2) + (n-3) +......+1 = [n(n-1)]/2
Time complexity=O(n^2)  ---> for all cases best, worst or average
Space complexity =O(1)
*/