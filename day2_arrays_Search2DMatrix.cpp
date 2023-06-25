// First element of row is greater than last element of previous row
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = (n*m)-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(matrix[mid/m][mid%m] == target ){
                return true;
            }
            else if( matrix[mid/m][mid%m] >= target ){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};

// Row wise Col wise sorted

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i =0;
        int j = m-1;
        while(i<n && j>=0){
            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] >= target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
