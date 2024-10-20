class Solution {
public:
    // custom function to revserse an Vector
    void reverseVector(vector<int>& arr){
        int n = arr.size();
        int start = 0;
        int end = n-1;

        while(start<end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }



    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // Step 1: Transpose 2D matrix
        for(int i = 0; i < n; i++){
            for(int j = i; j < matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Step 2: Reverse 2D matrix ki sari rows
        // kitni rows hai: 0 -> n-1
        for(int i = 0; i < n; i++){
            // har row ko reverse krna hai
            // during this reverse, har row k elements reverse ho rhe hai 
            // phele 0 row k element reverse hue then 1 then all 
            reverse( matrix[i].begin(), matrix[i].end() );

            // This is custom reverse vector ka funcation
                // reverseVector(matrix[i]);
        }
    }
};