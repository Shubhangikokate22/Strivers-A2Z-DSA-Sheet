/*
Problem Statement: You are given an array of integers,
 your task is to move all the zeros in the array to
  the end of the array and move non-negative integers
  to the front by maintaining their order.

  example: arr[]={1, 0, 2, 3, 2, 0, 0, 4, 5, 1}
  answer : {1,2,3,2,4,5,1,0,0,0}

  Brute force approach
  suppose the size of array is n it has n-x zeros and x non zero elements
  copy all the non zero elements in a temperory array
  now copy the temperory array one by one to the original array fill the first x places
  now the remaining next n-x places to zero
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> move_zero(vector<int> arr, int n)
{
    vector<int> temp;

    // copy non zero elements to the temp array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    // number of non zero elements
    int nz = temp.size();
    // copy the temp to original array
    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }

    // set the next n-nz elements to zero
    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }
    return arr;
}

/*
complexities
total TC is O(n)+O(nz)+O(n-nz)=O(2n)
SC: O(n) in worst case
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
