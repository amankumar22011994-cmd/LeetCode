class Solution {
public:
    int dist(int a,int b){
        int diff=abs(a-b);
        return min(diff , 10-diff);
    }
    int minRotations(int n, string s) {
        int total=0,prev=0;
        for(int i=0;i<n;i++){
            int curr=s[i]-'0';
            total +=dist(prev,curr);
            prev=curr;
        }
        int answer=total;
        for(int k=0;k<n;k++){
            int before= (k==0)? 0:s[k-1]-'0';
            int old=dist(before,s[k]-'0');
            int newjod=dist(before,s[n-1]-'0');
            answer=min(answer,total-old+newjod);
        }
        return answer;
    }
};