/*
Problem Statement: Given an array, we have to find the largest element in the array.
Brute force
sort the given array and print the arr[n-1] element
time complexity will be O(Nlog2(N))

Optimal approach
1)Create a max variable and initialize it with arr[0].
2)Use a for loop and compare it with other elements of the array
3)If any element is greater than the max value, update max value with the element’s value
4)Print the max variable.
*/
#include<bits/stdc++.h>
using namespace std;
void largest(vector <int> &arr, int n)
{
    int max=arr[0];
    for(int i=0; i<n ; i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    cout<<"The largest element in the given array is : "<<max;
}

int main()
{
    vector <int> arr={3,6,7,1,11,2};
    int n=6;
    cout<<"The given array is: ";
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    largest(arr,n);
    return 0;
}
//Complexities
/*
Time complexity: O(N)
space complexity: O(1)
*/