class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int left = 0;
        int right = n-1;
        while (index <= right) {
            if(nums[index] == 0){
                swap(nums[index], nums[left]);
                left++;
                index++;
            } 
            else if(nums[index] == 2){
                swap(nums[index], nums[right]);
                right--;
                // catch here id ki yha index++ ni hoga as jo naya element aaya hai usko bi to check krna hai ki kya aaaya hai 
            } else {
                index++;
                }
        }
    }
};