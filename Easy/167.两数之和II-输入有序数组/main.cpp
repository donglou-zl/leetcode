class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::unordered_map<int, int> nums_map;
        int cnt = numbers.size();
        for (int i = 0; i < cnt; ++i) {
            if (nums_map.find(target - numbers.at(i)) != nums_map.end()) {
                return {nums_map[target - numbers.at(i)], i};
            } else {
                nums_map[numbers.at(i)] = i;
            }
        }
        return {-1, -1};
    }
};