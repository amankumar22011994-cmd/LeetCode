class Solution {
public:
    char kthCharacter(int k) {
        int count=0;
        while(k>1){
            long long len=1;
            while(len*2 <k){
                len *=2;
            }
            if(k>len){
                k=k-len;
                count++;
            }
        }
        return 'a'+ count;
    }
};