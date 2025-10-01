/*
Merge sort
Divide and merge
Input: N=5, arr[]={4,2,1,6,7}
Output: 1,2,4,6,7

dry run 
            4,2,1,6,7               1,2,4,6,7
        4,2,1       6,7         1,2,4       6,7
     4,2     1    6     7      2,4   1       6  7
    4   2                    2    4

Merge Sort is a divide and conquers algorithm, it divides the given array into equal parts and then merges the 2 sorted parts. 
There are 2 main functions :
merge(): This function is used to merge the 2 halves of the array. It assumes that both parts of the array are sorted and merges both of them.
mergeSort(): This function divides the array into 2 parts. low to mid and mid+1 to high where,
 low = leftmost index of the array
 high = rightmost index of the array
 mid = Middle index of the array 
We recursively split the array, and go from top-down until all sub-arrays size becomes 1.


Approach:

We will be creating 2 functions mergeSort() and merge().
mergeSort(arr[], low, high):
In order to implement merge sort we need to first divide the given array into two halves. Now, if we carefully observe, we need not divide the array and create a separate array, but we will divide the array's range into halves every time. For example, the given range of the array is 0 to 4(0-based indexing). Now on the first go, we will divide the range into half like (0+4)/2 = 2. So, the range of the left half will be 0 to 2 and for the right half, the range will be 3 to 4. Similarly, if the given range is low to high, the range for the two halves will be low to mid and mid+1 to high, where mid = (low+high)/2. This process will continue until the range size becomes.
So, in mergeSort(), we will divide the array around the middle index(rather than creating a separate array) by making the recursive call :
1. mergeSort(arr,low,mid)   [Left half of the array]
2. mergeSort(arr,mid+1,high)  [Right half of the array]
where low = leftmost index of the array, high = rightmost index of the array, and mid = middle index of the array.
Now, in order to complete the recursive function, we need to write the base case as well. We know from step 2.1, that our recursion ends when the array has only 1 element left. So, the leftmost index, low, and the rightmost index high become the same as they are pointing to a single element.
Base Case: if(low >= high) return;


*/
#include<bits/stdc++.h>
using namespace std;
void merge(vector <int> &arr ,int low,int mid,int high)
{
    vector <int> temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right]) 
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
             temp.push_back(arr[right]);
           right++;
        }
    }
    while(left<=mid)
    {
       temp.push_back(arr[left]);
            left++;  
    }
    while(right<=high)
    {
         temp.push_back(arr[right]);
           right++;
    }

    //copy temp to arr
    for(int i=low; i<=high; i++)
    {
        arr[i]=temp[i-low];
    }
}

void merge_sort(vector <int> &arr ,int low,int high)
{
    int mid=(low+high)/2;
    if(low>=high) return;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    vector <int> arr={4,2,1,6,7};
    int n=5;
    cout<<"The unsorted list is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout << endl;
    merge_sort(arr, 0, n - 1);
    cout << "After Sorting list is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}
/*
Complexities
Time complexity: O(n*log2(n))-----> log2(n) because we divide array each time and n because we assume that
we take n steps to get a sorted array
space complexity: O(N) ----> we are using temperory array
*/