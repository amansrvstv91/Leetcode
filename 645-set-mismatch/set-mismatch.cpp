
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int dup, mis;
        for(int i=1;i<=nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++) {
                if(nums[j]==i){
                    count++;
                }
            }
            if(count==2)
                dup=i;
            if(count==0)
                mis=i;
        }
        ans.push_back(dup);
        ans.push_back(mis);
        return ans;
    }
};
