class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int i=0;
        while ((n-i)>=needle.size()) {
            if (haystack.substr(i, needle.size()) == needle)
                return i;
            
            i++;
        }

        return -1;
    }
};