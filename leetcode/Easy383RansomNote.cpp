class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        list<char> s1;
        list<char> s2;
        for(int i = 0; i < ransomNote.length(); i++) {
            s1.push_back(ransomNote[i]);
        }
        for(int i = 0; i < magazine.length(); i++) {
            s2.push_back(magazine[i]);
        }
        
        list<char>::iterator temp;
        for(list<char>::iterator i = s1.begin(); i != s1.end(); i++) {
            temp = find(s2.begin(), s2.end(), *i);
            
            if(temp != s2.end()) {
                s2.erase(temp);
            }
            else {
                return false;
            }
        }
        return true;
    }
};