class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int cnt = 0, maxCnt = 0;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: nums){
            cnt = 0;
            if(mp.find(i-1) == mp.end() && mp[i]){
                int temp = i;
                while(mp.find(temp) != mp.end()){
                    cnt++;
                    temp++;
                }
               mp[i] = false; 
               maxCnt = max(maxCnt, cnt);
            }
        }
        return maxCnt;
    }
    // int longestConsecutive(vector<int>& nums) {
    //     unordered_set<int> numSet(nums.begin(),nums.end());        
    //     int maxLength=0;
    //     for(int num:nums){
    //         if(numSet.find(num)==numSet.end()) continue;
    //         int length=1;
    //         numSet.erase(num);
    //         int prev=num-1;
    //         int next=num+1;
    //         while(numSet.find(prev)!=numSet.end()){
    //             numSet.erase(prev);
    //             length++;
    //             prev--;
    //         }
    //         while(numSet.find(next)!=numSet.end()){
    //             numSet.erase(next);
    //             length++;
    //             next++;
    //         }
    //         maxLength=max(length,maxLength);
    //     }
    //     return maxLength;      
    // }
};