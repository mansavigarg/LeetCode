class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int first = -1; 
        int last = -1;

        while(start<=end){
            int mid = start + (end-start) / 2;

            if(nums[mid] == target){
                // Step 1: store the index is first 
                first = mid ;
                // Step 2: left me jao
                end = mid - 1;
            } 
            else if(target > nums[mid]){
                // right me jao
                start = mid + 1;
            }

            else if(target < nums[mid]){
                // left mein jao
                end = mid - 1;
            }
        }

        // Reset start and end for the second search
        start = 0;
        end = n - 1;

        while(start<=end){
            int mid = start + (end-start) / 2;

            if(nums[mid] == target){
                // Step 1: store the index is last 
                last = mid ;
                // Step 2: left me jao
                start = mid + 1;
            } 
            else if(target > nums[mid]){
                // right me jao
                start = mid + 1;
            }

            else if(target < nums[mid]){
                // left mein jao
                end = mid - 1;
            }
        }

        ans.push_back(first);
        ans.push_back(last);
        return ans;


    }
};