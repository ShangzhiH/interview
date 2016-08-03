class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        map<int, int> hashNums1;
        for(vector<int>:: iterator i = nums1.begin(); i < nums1.end(); i++) {
            if(hashNums1.find(*i) == hashNums1.end()) {
                hashNums1[*i] = 0;
            }
        }
        
        for(vector<int>:: iterator i = nums2.begin(); i < nums2.end(); i++) {
            if(hashNums1.find(*i) != hashNums1.end() && hashNums1[*i] == 0) {
                hashNums1[*i] = 1;
                result.push_back(*i);
            }
        }
        return result;
    }
};