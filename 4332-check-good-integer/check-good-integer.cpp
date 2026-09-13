class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int x=n;
        int ans=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        while(x>0){
            int rem=x%10;
            ans+=rem*rem;
            x/=10;
        }
        return (ans-sum)>=50; 
    }
};