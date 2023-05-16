class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i;
        int index=0;
        int count=0;
        map<char,int>m;
        for(i=0;i<jewels.length();i++)
        {
            m.insert({jewels[i],1});
        }
        for(i=0;i<stones.length();i++)
        {
            if(m.count(stones[i])==1)
            {
                count++;
            }
        }
        return count;
        
    }
};