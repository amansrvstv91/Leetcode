class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=nums[nums.size()-1]; 
        int count= 0;
        for (int i=0;i<nums.size();i++) {
            count=count+(max-nums[i]);
        }      
        if (nums.size()<=1) return 0;
        return count;
    }
};