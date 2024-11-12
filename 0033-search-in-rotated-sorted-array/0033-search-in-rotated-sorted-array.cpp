class Solution {
public:
    int findPivotIndex(vector<int>& nums){
        int n = nums.size();
        int s = 0;
        int e = n - 1;

        while(s <= e){
            int mid = s + (e-s) / 2;
            // corner case
            if(s == e){
                // this is case of single element
                return s;
            }

            if( mid-1 >= 0 && nums[mid] < nums[mid-1]){
                return mid-1;
            }
            else if(mid+1 < n && nums[mid] > nums[mid+1]){
                return mid;
            }
            else if(nums[s] > nums[mid]){
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return -1;
    }

    int binarySearch(vector<int>& arr, int s, int e, int target){
        while (s <= e){
            int mid = s + (e-s) / 2;
            if(arr[mid] == target){
                return mid;
            }
            if(target > arr[mid]){
                s = mid + 1;
            }
            if(target < arr[mid]){
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {

        int pivotIndex = findPivotIndex(nums);
        int n = nums.size();
        int ans = -1;

        // search in A 
        if(target >= nums[0] && target <= nums[pivotIndex]){
            ans = binarySearch(nums,0,pivotIndex, target);
        }
        // else if (target >= nums[pivotIndex+1] && target <= nums[n-1])
        else {
            ans = binarySearch(nums,pivotIndex+1,n-1, target);
        }
        return ans ;
    }
};