class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> check;
        for(int i =0; i < n; i++){
            check.insert(nums[i]);
        }
        if(check.size() < n){
            return true;
        }
        return false;

    }
};