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
*/
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int i, int n)
{   
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertion_sort(arr,i+1,n);
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
   insertion_sort(arr, 0,n);
     cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//complexities
/*
The best case occurs if the given array is already sorted.
 And if the given array is already sorted, the recursion calls will only occur and inside the recursive function, the loop will run for 0 times(as each element is already present in its correct position).
  So, our overall time complexity in the best case will boil down to O(N), where N = size of the array.


*/