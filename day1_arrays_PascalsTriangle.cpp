// class Solution {
// public:
    
//     vector<int>generateRows(int row){
//         vector<int>ans;
//         ans.push_back(1);
//         int result = 1;
//         for(int i=1;i<row;i++){
//             raesult = result * (row-i)/i;
//             ans.push_back(result);
//         }
//         return ans;
//     }
    
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> ans;
//         for(int i=1;i<=numRows;i++){
//             ans.push_back(generateRows(i));
//         }
//         return ans;
//     }
// };


// Shorter implementation
class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i) // for first and last row
                pascal[i].push_back(1);

                else 
                pascal[i].push_back(pascal[i-1][j-1] + pascal[i-1][j]);
            }
        }
        return pascal; 
    }
};
