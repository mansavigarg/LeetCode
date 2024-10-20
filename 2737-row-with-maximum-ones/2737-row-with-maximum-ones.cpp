class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
         vector<int> ans;
         int n = mat.size();
         // oneCount -> will store max number of 1's in a row
         int oneCount = INT_MIN;
         // rowNumber -> will store index of max number of 1's wali row
         int rowNumber = -1;

         for(int i = 0; i<n; i++){
            // har new row k lye count 0 se start hota hai 
            int count = 0;
            for(int j=0; j<mat[i].size(); j++){
                // if  1 found, then increment count
                if(mat[i][j] == 1){
                    count++;
                }
            }
            // after row completion, compare count with onecount
            if(count > oneCount){
                oneCount = count;
                rowNumber = i;
            }
        }
        ans.push_back(rowNumber);
        ans.push_back(oneCount);
        return ans;

    }
};