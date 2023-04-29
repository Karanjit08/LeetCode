class Solution {
public:
    bool func(int count1[], int count2[])
    {
        int i;
        for(i=0;i<26;i++)
        {
            if(count1[i]!=count2[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int size1 = s1.length();
        int size2 = s2.length();
        int count1[26] = {0};
        int count2[26] = {0};
        
        for(int i=0;i<size1;i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int i=0;
        int index2;
        int windowSize = size1;
        while(i<windowSize && i<size2)
        {
            index2 = s2[i] - 'a';
            count2[index2]++;
            i++;
        }
        if(func(count1,count2))
        {
            return true;
        }
        while(i<size2)
        {
            index2 = s2[i] - 'a';
            count2[index2]++;
            char oldChar = s2[i-windowSize];
            index2 = oldChar - 'a';
            count2[index2]--;
            i++;
            if(func(count1,count2))
            {
                return true;
            }
        }
        return false;
    }
};