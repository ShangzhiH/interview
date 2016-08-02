class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        int initResult1 = 0;    
        int initResult2 = 1;
        int result = 0;
        for(int i = 1; i <= n; i++) {
            result = initResult1 + initResult2;
            initResult1 = initResult2;
            initResult2 = result;
        }
        return result;
        
    }
};