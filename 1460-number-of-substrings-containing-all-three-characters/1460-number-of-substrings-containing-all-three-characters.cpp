class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0,n=s.size();
        unordered_map<int,int> hash;
        hash[0]=0,hash[1]=0,hash[2]=0;
        for(int i=0;i<n;i++){
            hash[s[i]-'a']=i+1;
            if(hash[0]!=0&&hash[1]!=0&&hash[2]!=0){
                count += min(hash[0],min(hash[1],hash[2]));
            }
        }
        return count;        
    }
};