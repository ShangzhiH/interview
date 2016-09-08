class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> allNums;
        for(vector<int>::iterator i = nums.begin(); i != nums.end(); i++) {
            if(allNums.find(*i) == allNums.end()) {
                allNums[*i] = 1;
            }
            else
                allNums[*i]++;
        }
        for(map<int, int>::iterator i = allNums.begin(); i != allNums.end(); i++) {
            if(i->second == 1)
                return i->first;
        }
        return NULL;
    }
};