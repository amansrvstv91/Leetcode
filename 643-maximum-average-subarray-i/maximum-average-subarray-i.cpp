class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maximum=INT_MIN;
        int i=0,j=0,sum=0;
        while(j<nums.size()){
            sum=sum+nums[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                maximum=max(maximum,sum);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return (double)maximum/k;
    }
};