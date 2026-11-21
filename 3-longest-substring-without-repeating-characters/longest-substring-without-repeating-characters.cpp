class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>lastIndex(256,-1);
        int maxLen=0;
        int left=0;
        for (int right=0;right<(int)s.length();right++){
            unsigned char ch=s[right];
            if (lastIndex[ch]>=left){
                left=lastIndex[ch]+1;
            }
            lastIndex[ch]=right;
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};