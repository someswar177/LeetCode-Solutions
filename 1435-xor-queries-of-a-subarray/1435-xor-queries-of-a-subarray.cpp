class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> prefixXor(n);
        prefixXor[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefixXor[i]=prefixXor[i-1]^arr[i];
        }
        vector<int> result;
        for(int i=0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            if(left==0){
                result.push_back(prefixXor[right]);
            }else{
                result.push_back(prefixXor[right]^prefixXor[left-1]);
            }
        }
        return result;        
    }
};