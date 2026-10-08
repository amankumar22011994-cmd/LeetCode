class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch==')') cnt--;
            if(cnt>0)ans += ch;
            if(ch=='(') cnt++;
        }
        return ans;
    }
};