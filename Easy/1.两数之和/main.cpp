class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> maps;
        std::vector<int> v_ret;
        for (int i = 0; i < nums.size(); ++i) {
            if (maps.find(target-nums.at(i)) != maps.end()) {
                v_ret.push_back(maps[target-nums.at(i)]);
                v_ret.push_back(i);
                break;
            } else {
                maps[nums.at(i)] = i;
            }
        }
        return v_ret;
    }
};