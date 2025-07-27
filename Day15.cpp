class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;
        string target1 = (x > y) ? "ab" : "ba";
        int points1 = max(x, y);
        string target2 = (x > y) ? "ba" : "ab";
        int points2 = min(x, y);

        for (int i = 0; i < (int)s.length() - 1; ) {
            if (s.substr(i, 2) == target1) {
                s.erase(i, 2);
                score += points1;
                if (i > 0) i--; 
            } else {
                i++;
            }
        }

        for (int i = 0; i < (int)s.length() - 1; ) {
            if (s.substr(i, 2) == target2) {
                s.erase(i, 2);
                score += points2;
                if (i > 0) i--;
            } else {
                i++;
            }
        }

        return score;
    }
};