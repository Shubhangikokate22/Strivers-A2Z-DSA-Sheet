/*
Given a non-empty array of integers arr,
 every element appears twice except for one. Find that single one.

 APPROACH
XOR method

we know that there are two basic xor poperties these are
a^a=0
a^0=a

if we take xor of all the elements present in the given array the
one which does not repeat twice will be result

=====DRY RUN======
consider a array is [4,1,2,1,2]
now xor of all the elements is 4^1^2^1^2
here 4^(1^1)^(2^2)
4^0=4
so the number 4 appears once and thats the answer

*/

#include <bits/stdc++.h>
using namespace std;
int appear_once(vector<int> &arr, int n)
{
    int xor1 = 0;

    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}

/*
TC: O(N)
SC: O(1)

*/
int main()
{

    vector<int> arr = {4, 1, 2, 1, 2};
    int n=arr.size();
    int ans = appear_once(arr , n);
    cout << "The single element is: " << ans << endl;
    return 0;
    return 0;
}