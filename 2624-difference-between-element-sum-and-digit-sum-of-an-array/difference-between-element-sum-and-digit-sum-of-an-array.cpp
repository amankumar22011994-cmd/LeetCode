class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            elementSum=elementSum+nums[i];
            
            int num=nums[i];
            while(num>0){
                int digit=num%10;
                digitSum=digitSum+digit;
                num/=10;
            }
        }
        return abs(elementSum-digitSum);
    }
};