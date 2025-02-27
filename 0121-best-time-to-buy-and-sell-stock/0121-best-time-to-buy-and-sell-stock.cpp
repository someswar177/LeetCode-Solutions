class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minNum=prices[0];
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            maxProfit=max(maxProfit,prices[i]-minNum);
            minNum=min(minNum,prices[i]);
        }
        return maxProfit;        
    }
};