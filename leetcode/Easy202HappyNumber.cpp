class Solution {
public:
    bool isHappy(int n) {
        map<int, int> track;
        int tempo = n;
        int tempo2 = 0;
        while(track.find(tempo) == track.end()) {
            if(tempo == 1)
                return true;
            track[tempo] = 1;
            while(tempo > 0) {
                tempo2 += (tempo%10)*(tempo%10);
                tempo /= 10;
            }
            tempo = tempo2;
            tempo2 = 0;
        }
        return false;
    }
};