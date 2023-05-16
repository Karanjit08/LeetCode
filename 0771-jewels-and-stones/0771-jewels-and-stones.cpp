class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i;
        // for(i=0;i<jewels.length();i++)
        // {
        //     if(jewels[i]>=65 && jewels[i]<=90)
        //     {
        //         jewels[i] = jewels[i] + 32;
        //     }
        // }
        // for(i=0;i<stones.length();i++)
        // {
        //     if(stones[i]>=65 && stones[i]<=90)
        //     {
        //         stones[i] = stones[i] + 32;
        //     }
        // }
        int index=0;
        int count=0;
        while(index<jewels.length())
        {
            char ch = jewels[index];
            for(i=0;i<stones.length();i++)
            {
                if(ch==stones[i])
                {
                    count++;
                }
            }
            index++;
        }
        return count;
        
    }
};