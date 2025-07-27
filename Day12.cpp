class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";

        return runlength(countAndSay(n-1));
}

    string runlength(string s) {
        string result = "";
        int i = 0;
        while (i < s.length()) {
            char current = s[i];
            int count = 1;
            while (i + 1 < s.length() && s[i + 1] == current) {
                count++;
                i++;
            }
            if (count >= 1)
                result += to_string(count);
            i++;
            result += current;
        }
        return result;
    }
};

// count and say sequence