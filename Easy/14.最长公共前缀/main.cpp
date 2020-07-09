class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int64_t str_cnt = strs.size();
        string result = (str_cnt > 0) : strs.at(0) : "";
        int prefix_len = 0;
        bool finish = false;
        for (int i = 0; i < result.length(); ++i) {
            for (int j = 1; j < strs.size(); ++j) {
                if (strs.at(j).length() >= (i + 1) && strs.at(j)[i])
            }
        }
        
    }
};