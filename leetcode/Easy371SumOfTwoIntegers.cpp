class Solution {
public:
    int getSum(int a, int b) {
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        int sum1 = a^b;
        int sum2 = (a&b)<<1;
        return getSum(sum1, sum2);
        
    }
    
};