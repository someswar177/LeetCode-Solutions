class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxf=0,maxLength=0,n=s.size();
        unordered_map<char,int> hash;
        while(r<n){
            hash[s[r]]++;
            maxf=max(maxf,hash[s[r]]);
            if((r-l+1)-maxf > k){
                maxf=0;
                hash[s[l]]--;
                l++;
            }else{
                maxLength=max(maxLength,r-l+1);
            }
            r++;
        }
        return maxLength;
    }
};