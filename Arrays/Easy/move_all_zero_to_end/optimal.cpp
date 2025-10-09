/*
Problem Statement: You are given an array of integers,
 your task is to move all the zeros in the array to
  the end of the array and move non-negative integers
  to the front by maintaining their order.

  example: arr[]={1, 0, 2, 3, 2, 0, 0, 4, 5, 1}
  answer : {1,2,3,2,4,5,1,0,0,0}

  Optimal approach
  using two pointers consider i and j
  find the first zero element in the array and point j to it
  and now point i to index j+1
  if the element at i is non zero swap elements and j and i and move to point to next element
  also move i to point to the next element
  else if the element at the index i is zero just move the i pointer to the next element
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> move_zero(vector<int> arr, int n)
{
    int j = -1;
    // find the first zero element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // if j=-1 that means there if no zero present in the array so return original array
    if (j == -1)
        return arr;
    // if the element at i is non zero swap elements and j and i and move to point to next element
    //   also move i to point to the next element
    //   else if the element at the index i is zero just move the i pointer to the next element

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
    return arr;
}

/*
complexities
TC: O(N)
SC:O(1)
*/
int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();
    cout << "The original array : ";
    for (auto &it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "The array after  moving all the zeros to the end : ";
    vector<int> ans = move_zero(arr, n);
    for (auto &it : ans)
    {
        cout << it << " ";
    }

    cout << endl;
    return 0;
}