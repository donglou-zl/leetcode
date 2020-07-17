class Solution {
public:
    int strStr(string haystack, string needle) {
        const int h_len = haystack.length();
        const int n_len = needle.length();
        if (n_len == 0) {
            return 0;
        }
        int next[n_len];
        int i = 0;
        int j = 0;
        getNext(needle, next);
        while(i < h_len && j < n_len) {
            if (j == -1 || haystack[i] == needle[j]) {
                i++;
                j++;
            } else {
                j = next[j];
            }
        }
        if (j >= n_len) {
            return (i - j);
        } else {
            return -1;
        }
    }

    void getNext(string str, int *next) {
        int j = 0;
        int k = -1;
        next[0] = -1;
        while(j < str.length() - 1) {
            if (k == -1 || str[j] == str[k]) {
                j++;
                k++;
                if (str[j] == str[k]) {
                    next[j] = next[k];
                } else {
                    next[j] = k;
                }
            } else {
                k = next[k];
            }
        }
    }
};
