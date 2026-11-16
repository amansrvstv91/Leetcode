class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int x : nums) {
            count[x]++; 
            if (count[x]>1) {
                return true;
            }
        }
        return false;
    }
};
