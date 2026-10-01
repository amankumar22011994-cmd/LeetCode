class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0,b=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
             int c=max(b,a+nums[i]);
            a=b;
            b=c;
        }
        return b;
    }
};