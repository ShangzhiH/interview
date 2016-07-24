class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> result;
        vector<int> FinalResult;
        for(vector<int>::iterator i = nums1.begin(); i < nums1.end(); i++) {
            if(result.find(*i) == result.end()) {
                result[*i] = 1;
            }
            else
                result[*i] += 1;
        }
        
        for(vector<int>::iterator i = nums2.begin(); i < nums2.end(); i++) {
            if(result.find(*i) != result.end() && result[*i] > 0) {
                FinalResult.push_back(*i);
                result[*i]--;
            }
        }
        return FinalResult;
    }
};