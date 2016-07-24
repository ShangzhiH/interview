class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty())
            return false;
        map<int, int> Nums;
        for(vector<int>:: iterator i = nums.begin(); i < nums.end(); i++) {
            if(Nums.find(*i) != Nums.end())
                return true;
            Nums[*i] = 1;
        }
        return false;
    }
};