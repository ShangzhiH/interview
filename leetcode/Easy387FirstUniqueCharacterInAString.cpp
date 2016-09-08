class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> iterS;
        for(int i = 0; i < s.length(); i++) {
            if(iterS.find(s[i]) == iterS.end()) {
                iterS[s[i]] = 1;
            }
            else
                iterS[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++) {
            if(iterS[s[i]] == 1)
                return i;
        }
        return -1;
    }
};