class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> arr;
        int index ;
        int secondindex ;
        for(index = 0 ; index < n ; index++){
            for(int j = index+1; j < n ; j++){
                if(target - nums[index] == nums[j]){
                    secondindex = j;
                    arr.push_back(index);
                    arr.push_back(secondindex);
                    break;
                }
            }
        }
        return arr;
        // we can also use hasing for the optimal solution
    }
};
