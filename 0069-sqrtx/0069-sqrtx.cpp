class Solution {
public:


    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;
        long long int mid = s + (e-s) / 2;
        
        while (s <= e){
            // kya mid hi to ans hi ni hai
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                // ans store kro and
                // right mein jao
                ans = mid;
                s = mid + 1;
            }
            else {
                // left mein jana hai
                e = mid - 1;
            }
            mid = s + (e-s) / 2;
        }
        return ans;
    }
};