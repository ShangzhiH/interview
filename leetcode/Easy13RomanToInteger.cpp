class Solution {
public:
    int romanToInt(string s) {
        int f=10000,p,re=0;
        for(int i=0;i<s.size();i++) {
            switch(s[i]) {
                case 'M':
                    p=1000;
                    break;
                case 'D':
                    p=500;
                    break;
                case 'C':
                    p=100;
                    break;
                case 'L':
                    p=50;
                    break;
                case 'X':
                    p=10;
                    break;
                case 'V':
                    p=5;
                    break;
                default:
                    p=1;
                    break;
            }
            if(p<=f) {
                re+=p;
                f=p;
            }
            else {
                re+=p;
                re-=2*f;
                f=p;
            }
        }
        return re;
    }
};