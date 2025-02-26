class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            if(ans.empty()||intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
        
        // Brute Force Solution
        // vector<vector<int>> result;
        // int n=intervals.size();
        // sort(intervals.begin(),intervals.end());
        // for(int i=0;i<n;i++){
        //     int start=intervals[i][0];
        //     int end=intervals[i][1];
        //     if(!result.empty()&&end<=result.back()[1]){
        //         continue;
        //     }
        //     for(int j=i+1;j<n;j++){
        //         if(intervals[j][0]<=end){
        //             end=max(end,intervals[j][1]);
        //         }else{
        //             break;
        //         }
        //     }
        //     result.push_back({start,end});
        // }
        // return result;        
    }
};