class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num <= 0)
            return false;
        int rest = 0;
        while(num > 1) {
            rest = num%4;
            if(rest != 0) {
                return false;
            }
            num /= 4;
        }
        return true;
    }
};