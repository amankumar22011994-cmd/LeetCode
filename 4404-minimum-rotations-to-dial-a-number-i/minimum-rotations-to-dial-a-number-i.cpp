class Solution {
public:
    int minRotations(string s) {
        int n=s.size();
        int curr=0,total=0;
        for(int i=0;i<n;i++){
            int target=s[i]-'0';
            int diff=abs(curr-target);
            if(diff<= 5)total += diff;
            else total=total+(10-diff);
            curr=target;
        }
        return total;
    }
};