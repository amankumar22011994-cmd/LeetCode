class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=1;
        int i=0;
        while(i<n){
            int  r = ((nums[i] % k )+ k )% k;
            int j=i;
            while(j<n && ((nums[j] % k ) + k)%k == r)j++;
            int L= j-i;
            for(int len = L ; len >= 1;len--){
                if(1LL * (len-1)* r % k==0){
                    ans=max(ans,len);
                    break;
                }
            }
            i=j;
        }
        return ans;
    }
};