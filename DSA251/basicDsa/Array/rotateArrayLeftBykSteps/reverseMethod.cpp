class Solution {
public:
    void swapArray(int &num1,int &num2){
      int temp = num1;
      num1=num2;
      num2=temp;
    }

    void reverseArray(vector<int>& nums,int start , int end){
        while(start<end){
            swapArray(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;

        if(k==0) return;
        
        // Reverse the first part 
        reverseArray(nums, 0, n - k - 1);

        // Reverse the second part
        reverseArray(nums, n - k, n - 1);

        // Reverse the whole array
        reverseArray(nums, 0, n - 1);

    }
};


/*
    suppose array is [1,2,3,4,5]
                      0,1,2,3,4  
    n=5 ,k=3,
    output : 3 4 5 1 2

        // Reverse the first part 5-3-1 = 1 , (nums,0,1)  -> (2,1,3,4,5)
        reverseArray(nums, 0, n - k - 1);

        // Reverse the second part 5-3 = 2 , 5-1 = 4 , (nums,2,4) ->  (2,1,5,4,3)
        reverseArray(nums, n - k, n - 1);

        // Reverse the whole array 5-1 = 4 , (nums,0,4) -> (3,4,5,1,2)
        reverseArray(nums, 0, n - 1);

*/