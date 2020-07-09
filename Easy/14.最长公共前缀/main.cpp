class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int64_t str_cnt = strs.size();
        string result = (str_cnt > 0) ? strs.at(0) : "";
        int prefix_len = 0;
        bool finish = false;
        for (int i = 0; i < result.length(); ++i) {
            for (int j = 1; j < strs.size(); ++j) {
                if (strs.at(j).length() < (i + 1)) {
                    finish = true;
                    break;
                } else if (strs.at(j)[i] != result[i]) {
                    finish = true;
                    break;
                }
            }
            if (finish) {
                break;
            } else {
                prefix_len++;
            }
        }
        return result.substr(0, prefix_len);
    }
};