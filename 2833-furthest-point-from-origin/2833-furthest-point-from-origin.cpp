class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int i,n=moves.length();
        int score=0,count=0;
        for(i=0;i<n;i++){
            if(moves[i]=='L'){
                score++;
            }
            else if(moves[i]=='R'){
                score--;
            }
            else{
                count++;
            }
        }
        return abs(score) + count;
    }
};