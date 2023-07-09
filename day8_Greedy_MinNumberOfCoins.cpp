class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int>ans;
        int currency[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        for(int i=9;i>=0;i--){
            while(N >= currency[i]){
                ans.push_back(currency[i]);
                N = N - currency[i];
            }
        }
        return ans;
    }
};
