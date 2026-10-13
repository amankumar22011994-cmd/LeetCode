class Solution {
public:
    int minDays(int n) {
        int drav=n;
        vector<int>dp(n+1,1e9);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            for(int k=1;k*(k+1)/2 <= i;k++){
                int point=k*(k+1)/2;
                dp[i]=min(dp[i],dp[i-point]+k+(i!=point));
            }
        }
        return dp[n];
    }
};