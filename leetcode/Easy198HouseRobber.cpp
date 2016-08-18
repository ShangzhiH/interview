class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
        if(nums.size() == 1) {
            return nums[0];
        }
        int sum1 = 0;
        int sum2 = nums[0];
        int temp;
        for(int i = 1; i < nums.size(); i++) {
            temp = (sum1 + nums[i] > sum2) ? (sum1 + nums[i]) : sum2;
            sum1 = sum2;
            sum2 = temp;
        }
        return sum2;
    }
};