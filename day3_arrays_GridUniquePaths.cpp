class Solution {
public:
    int uniquePaths(int m, int n) {
        int total = m+n-2;
        int row = m-1;
        double res = 1;
        for(int i=1;i<=row;i++){
            res = (res * (total-row+i)) / i; 
        }
        return (int)res;
    }
    
};
