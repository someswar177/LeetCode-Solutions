class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int leftSum=0,rightSum=0,sum,score=0,rightInd=cardPoints.size()-1;
       for(int i=0;i<k;i++) leftSum += cardPoints[i];
       score=leftSum;
       for(int i=k-1;i>=0;i--){
        leftSum -= cardPoints[i];
        rightSum += cardPoints[rightInd];
        score=max(score,leftSum+rightSum);
        rightInd--;
       }         
        return score;
    }
};