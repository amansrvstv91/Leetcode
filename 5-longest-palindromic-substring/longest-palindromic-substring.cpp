class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        for (int i=0;i<s.length();i++) {
            for (int j=i;j<s.length();j++) {
                bool flag=true;
                int left=i;
                int right=j;
                while (left<right){
                    if (s[left]!=s[right]){
                        flag=false;
                        break;
                    }
                    left++;
                    right--;
                }
                if (flag==true&&j-i+1>ans.length()) {
                    ans=s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};