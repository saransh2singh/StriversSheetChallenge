class Solution {
public:
    
    vector<int>generateRows(int row){
        vector<int>ans;
        ans.push_back(1);
        int result = 1;
        for(int i=1;i<row;i++){
            raesult = result * (row-i)/i;
            ans.push_back(result);
        }
        return ans;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};
