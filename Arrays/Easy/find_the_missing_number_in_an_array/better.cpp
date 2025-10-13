/*
Problem Statement: Given an integer N and an array of size N-1 containing N-1
numbers between 1 to N. Find the number(between 1 to N), that is not present
in the given array.
using Hashing

The algorithm steps are as follows:

The range of the number is 1 to N. So, we need a hash array of size N+1
 (as we want to store the frequency of N as well).
Now, for each element in the given array, we will store the frequency in the hash array.
After that, for each number between 1 to N, we will check the frequencies.
 And for any number, if the frequency is 0, we will return it.
*/
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N) {

    int hash[N + 1] = {0}; //hash array

    // storing the frequencies:
    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;

    //checking the freqencies for numbers 1 to N:
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
return 0;
}