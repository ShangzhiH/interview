class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> FirstString;
        for(int i=0; i < s.length(); i++) {
            if(FirstString.find(s[i]) == FirstString.end()) {
                FirstString[s[i]] = 1;
            }
            else {
                FirstString[s[i]] += 1;
            } 
        }
        for(int i=0; i < t.length(); i++) {
            if(FirstString.find(t[i]) == FirstString.end()) {
                return false;
            }
            else {
                FirstString[t[i]] -= 1;
                if(FirstString[t[i]] == 0) {
                    FirstString.erase(t[i]);
                }
            }
            
        }
        
        if(FirstString.empty())
            return true;
        else 
            return false;
    }
};