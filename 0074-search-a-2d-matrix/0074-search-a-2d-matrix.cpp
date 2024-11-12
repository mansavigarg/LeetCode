class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row * col ; // n -> total indexs

        int s = 0;
        int e = n-1;
        
        while (s <= e){
            int mid = s + (e-s)/2;
            
            int rowIndex = mid / col;
            int colIndex = mid % col;
            int currentNumber = matrix[rowIndex][colIndex];

            if( currentNumber == target){
                return true;
            }
            else if ( target > currentNumber ){
                // right mein jao
                s = mid + 1;
            }
            else {
                // left mein jao
                e = mid - 1;
            }
        }
        return false;
    }
};