class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        for(char ch: s){
            if(ch=='1')ones++;
        }
        string ans="";
        for(int i=0;i< ones-1;i++){
            ans += '1';
        }
        for(int i=0;i<s.size()-ones;i++){
            ans+= '0';
        }
        ans+='1';
        return ans;
    }
};