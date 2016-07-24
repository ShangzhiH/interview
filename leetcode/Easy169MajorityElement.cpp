class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> Elements;
        int size = nums.size();
        for(vector<int>::iterator i = nums.begin(); i < nums.end(); i++) {
            if(Elements.find(*i) == Elements.end()) {
                Elements[*i] = 1;
            }
            else {
                Elements[*i] += 1;
            }
            if(Elements[*i] > size/2)
                return  *i;
        }
        return 0;
    }
};