#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int leftSum=0;
    int totalSum=0;
    int n = arr.size();

    for(int i =0;i<n;++i){
        totalSum+=arr[i];
    }

    for(int i =0;i<n;++i){
        if(leftSum==totalSum-leftSum-arr[i]){
            return i;
        }
        leftSum += arr[i];
    }

    return -1;
}