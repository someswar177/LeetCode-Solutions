class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double next=customers[0][0],wait=0 ;
        for(const auto& customer:customers){
            next = max(next,(double)customer[0])+customer[1];
            wait += next-customer[0];
        }
        
        return wait/customers.size();
    }
};