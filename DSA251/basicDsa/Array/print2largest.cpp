#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i =0;i<n;i++){
        if(largest<arr[i]){
            secondLargest=largest;
            largest=arr[i];
        }else if(largest>arr[i] && secondLargest<arr[i]){
            secondLargest=arr[i];
        }
    }

    if(secondLargest==INT_MIN){
        return -1;
    }

    return secondLargest;
}