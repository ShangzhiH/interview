class Solution {
public:
    string reverseVowels(string s) {
        int begin = 0;
        int end = s.length()-1;
        
        while(1) {
            while(s[begin] != 'a' && s[begin] != 'e' && s[begin] != 'i' && s[begin] != 'o' && s[begin] != 'u' && s[begin] != 'A' && s[begin] != 'E' && s[begin] != 'I' && s[begin] != 'O' && s[begin] != 'U') {
                begin++;
            }
            while(s[end] != 'a' && s[end] != 'e' && s[end] != 'i' && s[end] != 'o' && s[end] != 'u' && s[end] != 'A' && s[end] != 'E' && s[end] != 'I' && s[end] != 'O' && s[end] != 'U') {
                end--;
            }
        
            if(begin < end) {
                char temp = s[begin];
                s[begin] = s[end];
                s[end] = temp;
                begin++;
                end--;
            }
            else
                break;
        }
        return s;
    }
};