class Solution {
public:
    int minAddToMakeValid(string s) {
        int left=0;
        int right=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')left++;
            if(s[i]==')'){
                if(left>0) left--;
                else right++;
            }        
        }
        return right+left;        
    }
};