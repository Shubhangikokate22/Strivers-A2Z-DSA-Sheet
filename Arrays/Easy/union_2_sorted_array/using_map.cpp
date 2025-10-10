/*
Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. 
Find the union of two sorted arrays.

The union of two arrays can be defined as the common and distinct elements 
in the two arrays.NOTE: Elements in the union should be in ascending order.

approach:
Start
Create an empty map freq
For each element in arr1, insert it into the map
For each element in arr2, insert it into the map
Create an empty vector Union
For every key in the map, add it to Union
Return or print all elements of Union
Stop
*/

#include<bits/stdc++.h>
using namespace std;

vector <int> sunion(int arr1[], int arr2[] , int n , int m)
{
    map <int,int> freq;
    vector <int> arrunion;
    for(int i=0; i<n ; i++) freq[arr1[i]]++;
    for(int i=0; i<m ; i++) freq[arr2[i]]++;
    for(auto it : freq) arrunion.push_back(it.first);
    return arrunion;
}
/*
complexities
TC: 
*/
int main()
{
   int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12} ;
   int n=sizeof(arr1)/sizeof(arr1[0]);
   int m=sizeof(arr2)/sizeof(arr2[0]);

    vector <int> arrunion= sunion(arr1, arr2 , n ,  m);

    for(auto it: arrunion) cout<< it<<" ";
    return 0;
}