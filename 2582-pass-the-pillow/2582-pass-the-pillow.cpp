class Solution {
public:
    int passThePillow(int n, int time) {
        int currentPerson = 0;
        int direction = 1;
        
        for(int i=0;i<time;i++) {
            if(currentPerson == 0 && direction==-1){
                direction = 1;
            }else if(currentPerson == n-1 && direction==1){
                direction = -1;
            }
            
            currentPerson += direction;
        }
        
        return currentPerson+1;
        
    }
};