class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        stack<int> st;
        long long num=0;
        long long  ans=0;
        long  sign=1;

        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                num= num *10 + (s[i]-'0');
            }
            else if(s[i]=='+'){
                ans+= sign * num ;
                num=0;
                sign=1;
            }
            else if(s[i]=='-'){
                ans+= sign * num ;
                num=0;
                sign = -1;
            }
            else if( s[i]=='('){
                st.push(ans);
                st.push(sign);
                num=0;
                ans=0;
                sign=1;
            }
            else if(s[i]==')'){
                ans += sign* num;
                num=0;
                int prevSign= st.top();
                st.pop();
                int prevAns= st.top();
                st.pop();
                ans= prevAns+prevSign * ans;
            }
        }
        ans += sign * num;
        return ans ;
    }
};