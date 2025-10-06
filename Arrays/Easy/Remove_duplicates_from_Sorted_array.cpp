/*
Problem Statement: Given an integer array sorted in non-decreasing order, remove
the duplicates in place such that each unique element appears only once. 
The relative order of the elements should be kept the same.
If there are k elements after removing the duplicates, then the first k 
elements of the array should hold the final result. It does not matter what 
you leave beyond the first k elements.
Note: Return k after placing the final result in the first k slots of the array.

Brute force approach

Declare a Set.
Run a for loop from starting to the end.
Put every element of the array in the set.
Store size of the set in a variable K.
Now put all elements of the set in the array from the starting of the array.
Return K.

optimal approach
Two pointers
Intuition: We can think of using two pointers ‘i’ and ‘j’, 
we move ‘j’ till we don't get a number arr[j] which is different from arr[i]. 
As we got a unique number we will increase the i pointer and update its value by arr[j]. 

Approach:
Take a variable i as 0;
Use a for loop by using a variable ‘j’ from 1 to length of the array.
If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
After completion of the loop return i+1, i.e size of the array of unique elements.
*/
#include<bits/stdc++.h>
using namespace std;
//brute force approach
int remove_dup(vector <int> &arr)
{
    set <int> st;
    int index=0;
    for(int i=0 ;i<arr.size();i++)
    {
        st.insert(arr[i]);
    }
    int k=st.size();
    for(auto it : st)
    {
        arr[index]=it;
        index++;
    }
    return k;
}



//for the above brute force approach the complexities are
/*
TC:O(n*log(n))+O(n)
SC:O(N)
*/


//Optimal approach
int remove_duplicate(vector <int> &arr)
{
    int i=0;
    for(int j=1; j<arr.size();j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
            
        }
    }
    return i+1;
}

/*
complexities
TC: O(N)
SC: O(1);
*/

int main()
{
    vector <int> arr={1,1,3,5,6,6,8,8,9,9,10};
    int size=remove_dup(arr);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    int k=remove_duplicate(arr);
    cout << "Array after removing duplicates(optimal approach):  ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}