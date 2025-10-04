/*
 Given an array, find  second largest element and second smallest element in the array.
------Brute force Approach------
Sort the array in ascending order
start from the end loop until you find secondlargest (i.e loop from end until you find a number not equal to the largest)
simarly to find second smallest (i.e loop from begin until you find a number not equal to the smallest)
Time Complexity: O(NlogN), For sorting the array
Space Complexity: O(1)

-------Better approach-------
Find the smallest and largest element in the array in a single traversal
After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
Similarly, we would find the largest element which is just smaller than the largest element we just found
Indeed, this is our second smallest and second largest element.

Time Complexity: O(N), We do two linear traversals in our array
Space Complexity: O(1)

-------Optimal Approach--------
In the previous solution, even though we were able to bring down the time complexity to O(N),
we still needed to do two traversals to find our answer
We would require four variables: small,second_small, large,
and second_large. Variable small and second_small are 
initialized to INT_MAX while large and second_large are initialized to INT_MIN.

Second Smallest Algo:

If the current element is smaller than ‘small’, then we update second_small and small variables
Else if the current element is smaller than ‘second_small’ then we update the variable ‘second_small’
Once we traverse the entire array, we would find the second smallest element in the variable second_small.

Second Largest Algo:

If the current element is larger than ‘large’ then update second_large and large variables
Else if the current element is larger than ‘second_large’ then we update the variable second_large.
Once we traverse the entire array, we would find the second largest element in the variable second_large.

 */
#include<bits/stdc++.h>
using namespace std;
int second_smallest(vector<int> &arr)
{
int n=arr.size();
int smallest=INT_MAX;
int second_smallest=INT_MAX;
for(int i=0 ; i<n ; i++)
{
if(arr[i]<smallest)
{
    second_smallest=smallest;
    smallest=arr[i];
}
if(arr[i]<second_smallest && arr[i]!=smallest)
{
    second_smallest=arr[i];
}

}
return second_smallest;
}


int second_largest(vector<int> &arr)
{
int n=arr.size();
int largest=INT_MIN;
int second_largest=INT_MIN;
for(int i=0 ; i<n ; i++)
{
if(arr[i]>largest)
{
    second_largest=largest;
    largest=arr[i];
}
if(arr[i]>second_largest && arr[i]!=largest)
{
    second_largest=arr[i];
}

}
return second_largest;
}



int main()
{
    vector <int> arr={1,3,2,5,6,8,3,7};
    int second_large=second_largest(arr);
    int second_small=second_smallest(arr);
    cout<<"The second largest element in the array is : "<<second_large;
    cout<<endl;
    cout<<"The second smallest element in the array is : "<<second_small;
    cout<<endl;
    return 0;
}
//Complexities
/*
Time Complexity: O(N), Single-pass solution

Space Complexity: O(1)
*/