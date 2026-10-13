class Solution {
public:
    // int loot (int idx, vector<int>& nums,vector<int>&dp){
    //     if(idx >= nums.size()) return 0;
    //     if(dp[idx] !=-1 )return dp[idx];
    //     int pick=nums[idx]+loot(idx+2,nums,dp);
    //     int skip =loot(idx+1,nums,dp);
    //     dp[idx]=max(pick,skip);
    //     return dp[idx];
    // }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(nums.size(),-1);
        dp[0]=nums[0];
        if(n>1)dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};