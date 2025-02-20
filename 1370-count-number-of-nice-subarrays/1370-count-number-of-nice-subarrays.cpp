class Solution {
public:
    int findAllSubarrays(vector<int>& nums,int k){
        int l=0,r=0,sum=0,count=0,n=nums.size();
        if(k<0) return 0;
        while(r<n){
            sum+=(nums[r]%2);
            while(sum>k){
                sum-=(nums[l]%2);
                l++;
            }
            count += r-l+1;
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return findAllSubarrays(nums,k) - findAllSubarrays(nums,k-1);
        // My Solution
        // int l=0,r=0,odds=0,count=0,n=nums.size();
        // deque<int> dq;
        // while(r<n){
        //     if(nums[r]&1){
        //         odds++;
        //         dq.push_back(r);
        //     }
        //     if(odds>k){
        //         l=dq.front()+1;
        //         dq.pop_front();
        //         odds--;
        //     }
        //     if(odds==k){
        //         count += dq.front()-l+1;
        //     }
        //     r++;
        // }
        // return count;        
    }
};