//  Equilibrium Index

class Solution {
public:
    bool checkPossibility(vector<int>& arr) {
        int count =0;
        int n = arr.size();
        for(int i=0;i<n-1;++i){
            if(arr[i]>arr[i+1]){
                count++;
                if(count>1){
                    return false;
                }

                // Check if we can modify arr[i] or arr[i + 1]
                if(i>0 && arr[i-1]>arr[i+1]){
                arr[i+1] = arr[i];
                }else{
                arr[i]=arr[i+1];
                }
            }
        }

        return true;
    }
};