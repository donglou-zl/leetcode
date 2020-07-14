class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int> result;
      int tmp_idx = 0;
      for (int i = 0; i < nums1.size(); ++i) {
        for (int j = tmp_idx; j < nums2.size(); ++j) {
          if (nums1.at(i) == nums2.at(j)) {
            result.push_back(nums2.at(j));
            tmp_idx = j + 1;
            break;
          }
        }
      }
      return result;
    }
};