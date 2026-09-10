class Solution {
public:
    int solve(vector<int>& nums, int i, int xr) {
        if(i == nums.size())
            return xr;
        int take = solve(nums, i + 1, xr ^ nums[i]);
        int notTake = solve(nums, i + 1, xr);
        return take + notTake;
    }

    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};