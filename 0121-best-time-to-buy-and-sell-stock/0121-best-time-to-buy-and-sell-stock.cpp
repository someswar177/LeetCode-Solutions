class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minNum=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minNum){
                minNum=prices[i];
            }else{
                maxProfit=max(maxProfit,prices[i]-minNum);
            }
        }
        return maxProfit;        
    }
};