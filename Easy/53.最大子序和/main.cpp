class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        const int64_t size = nums.size();
        int tmp_max = INT_MIN;
        int tmp_sum = 0;
        for(int i = 0; i < size; ++i) {
            tmp_sum += nums.at(i);
            tmp_max = (tmp_sum > tmp_max) ? tmp_sum : tmp_max;
            if (tmp_sum < 0) {
                tmp_sum = 0;
            }
        }
        return tmp_max;
    }
};