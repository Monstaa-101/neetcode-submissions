class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        bool yes = false;
        if (n == 0) return false;

        for(int i=0; i<n; i++){
            int j = i+1;
            while(j<n and nums[i] == nums[j] ) {
                yes = true;
                return yes;
            }
        }
        return false;
    }
};