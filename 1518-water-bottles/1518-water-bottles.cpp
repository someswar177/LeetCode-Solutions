class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int emptyBottles = numBottles;
        int drank = numBottles;
        int bought = 1;
        // drank += bought;
        int remain;
        while(bought){
            bought = emptyBottles/numExchange;
            remain = emptyBottles%numExchange;
            emptyBottles = bought+remain;
            drank += bought;
        }
        
        return drank;        
    }
};