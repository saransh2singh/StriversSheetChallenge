class Solution 
{
    public:
    static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);
        int maxDead = INT_MIN;
        for(int i=0;i<n;i++){
            maxDead = max(maxDead,arr[i].dead);
        }
        vector<int>schedule(maxDead+1,-1);
        int count = 0;
        int maxProfit = 0;
        for(int i=0;i<n;i++){
            int currProfit = arr[i].profit;
            int jobId = arr[i].id;
            int currDead = arr[i].dead;
            for(int j=currDead;j>0;j--){
                if(schedule[j]==-1){
                    count++;
                    maxProfit += currProfit;
                    schedule[j] = jobId;
                    break;
                }
            }
        }
            vector<int>ans;
            ans.push_back(count);
            ans.push_back(maxProfit);
            return ans;
    } 
};
