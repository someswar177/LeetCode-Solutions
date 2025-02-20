class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0,r=0,odds=0,count=0,n=nums.size();
        vector<int> vec;
        while(r<n){
            if(nums[r]&1){
                odds++;
                vec.push_back(r);
            }
            if(odds>k){
                l=vec.front()+1;
                if(!vec.empty()) vec.erase(vec.begin());
                odds--;
            }
            if(odds==k){
                count += vec.front()-l+1;
            }
            r++;
        }
        return count;        
    }
};