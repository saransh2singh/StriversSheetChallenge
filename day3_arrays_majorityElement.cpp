class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int count = 0;
        for(int i=0 ; i<nums.size();i++){
            if(count == 0){
                count = 1;
                el = nums[i];
            }
            else if(el == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == el){
                cnt++;
            }
        }
        if(cnt > nums.size()/2){
            return el;
        }
        return -1;
    }
};
