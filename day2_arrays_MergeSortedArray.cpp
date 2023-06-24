class Solution {
public:
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
        int i = n-1;
        int j = m-1;
        int res = m+n-1;
        while(i>=0 && j>=0){
            if(arr1[i]<arr2[j]){
                arr1[res] = arr2[j];
                res--;
                j--;
            }
            else if(arr1[i]>=arr2[j]){
                arr1[res] = arr1[i];
                i--;
                res--;
            }
        }
        while(j >= 0){
            arr1[res] = arr2[j];
            res--;
            j--;
        }
        }
};
