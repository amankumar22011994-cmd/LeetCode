class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        return  (first-1)*(second-1);
    }
};