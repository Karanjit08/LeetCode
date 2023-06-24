class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int size = needle.length();
        int i;
        int index=-1;
        for(i=0;i<=n-size;i++)
        {
            string temp = haystack.substr(i,size);
            if(temp==needle){
                index = i;
                break;
            }
        }
        return index;
    }
};