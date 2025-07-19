class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1;
        for(int i=0;i<(int)haystack.size();i++)
        {
                if(haystack[i] == needle[0])
                {
                    string substr = haystack.substr(i,(int)needle.length());
                    if(substr==needle)
                    {
                        return i;
                    }

                }
        }
        return -1;
    }
};