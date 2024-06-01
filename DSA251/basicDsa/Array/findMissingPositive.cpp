class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0,totalSum=0;
        int i=0,n=nums.size();

        //if(n==1) return 1;

        for(int i =0;i<n;i++){
            totalSum+=nums[i];
        }

        for(int i=0;i<n;i++){
            if(leftSum==totalSum-leftSum-nums[i]){
                return i;
            }

            leftSum+=nums[i];
        }
        return -1;
    }
};