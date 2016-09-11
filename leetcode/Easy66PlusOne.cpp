class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        digits.insert(digits.begin(), 0);
        
        for(int i = digits.size()-1; i >= 0; i--) {
            if(digits[i] == 9) {
                digits[i] = 0;
            }
            else {
                digits[i] += 1;
                break;
            }
        }
        if(digits[0] == 0) {
            digits.erase(digits.begin());
        }
        return digits;
    }
};