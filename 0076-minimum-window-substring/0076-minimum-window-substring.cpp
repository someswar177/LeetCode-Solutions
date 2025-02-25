class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,count=0,index=-1,m=s.size(),n=t.size(),minLength=INT_MAX;
        unordered_map<char,int> hash;
        for(int i=0;i<n;i++){
            hash[t[i]]++;
        }
        while(r<m){
            if(hash[s[r]]>0) count=count+1;
            hash[s[r]]--;
            while(count==n){
                if(r-l+1<minLength){
                    minLength=r-l+1;
                    index=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count--;
                l++; 
            }
            r++;
        }
        return index==-1 ? "" : s.substr(index,minLength);
    }
};