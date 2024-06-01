vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int> newRotateArray;
    for(int i =k;i<arr.size();i++){
        newRotateArray.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        newRotateArray.push_back(arr[i]);
    }

    return newRotateArray;
}


/*
    Steps.
    1. create new dyanamic array 
    2. push_back from k to end of array 
    3. push_back from i=0 to k 
    4. return newRotateArray
*/