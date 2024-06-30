class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int> hash;
        int l = 0;
        int r = 0;
        int n = s.length();
        int maxLength = 0;
        int len = 0;
        while(r<n){
            if (hash.find(s[r]) != hash.end() && hash[s[r]] >= l) {
                if(hash[s[r]]>=l){
                    l = hash[s[r]]+1;
                }
            }
            len = r-l+1;
            maxLength = max(maxLength,len);
            hash[s[r]] = r; 
            r++;
        }
        return maxLength;
    }
};