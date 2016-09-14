class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> ss;
        char result=' ';
        for(int i = 0; i < s.length(); i++) {
            if(ss.find(s[i]) == ss.end()) {
                ss[s[i]] = 1;
            }
            else {
                ss[s[i]]++;
            }
        }
        for(int i = 0; i < t.length(); i++) {
            if(ss.find(t[i]) == ss.end() || ss[t[i]] == 0) {
                result = t[i];
                break;
            }
            else {
                ss[t[i]]--;
            }
        }
        return result;
    }
};