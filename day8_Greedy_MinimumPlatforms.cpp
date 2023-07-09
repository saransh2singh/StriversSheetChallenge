class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i = 1;
    	int j = 0;
    	int platform = 1;
    	int maxi = INT_MIN;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform++;
    	        maxi = max(maxi , platform);
    	        i++;
    	    }
    	    else{
    	        platform--;
    	        j++;
    	    }
    	}
    	return maxi;
    }
};
