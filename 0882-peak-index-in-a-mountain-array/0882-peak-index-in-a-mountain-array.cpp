class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;

        while(start < end){
            int mid = start + (end-start) / 2;
            if(arr[mid] < arr[mid+1] ){
                // A wali line pr hu 
                // peak right mein exist krti hai
                // so shift to right
                start = mid + 1;
            }
            else {
                // yaa toh mein B line pr hu -> to muje left jana padega
                // ya toh mein Peak element pr hu
                end = mid;
            }
        }
        return start;
        
    }
};