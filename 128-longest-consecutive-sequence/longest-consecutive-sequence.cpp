class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int longest=0;
        int count=1;
        int lastConsecutive=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1 == lastConsecutive){
                lastConsecutive =nums[i];
                count++;
            }
            else if(nums[i] != lastConsecutive){
                lastConsecutive=nums[i];
                count=1;
            }
            longest=max(longest,count);
        }
        return longest;
    }
};