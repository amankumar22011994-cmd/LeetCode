#include<cctype>
#include<string>
using namespace std;

class Solution {
public:

    bool check(string &s,int i){
        int n=s.size();
        if(i>=n/2)return true;
        if(s[i]!=s[n-i-1])return false;
        return check(s,i+1);
    }
    bool isPalindrome(string s) {
        int n=s.size();
        string t="";
        for(int j=0;j<n;j++){
            char c=s[j];
            if(isalnum(c)){
                t += tolower(c);
            }
        }
        return check(t,0);
    }
};