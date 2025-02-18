class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxf=0,maxLength=0,n=s.size();
        int hash[26]={0};
        while(r<n){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            if((r-l+1)-maxf > k){
                maxf=0;
                hash[s[l]-'A']--;
                l++;
            }else{
                maxLength=max(maxLength,r-l+1);
            }
            r++;
        }
        return maxLength;
    }
};