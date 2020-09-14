class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int np1 = m - 1;
        int np2 = n - 1;
        int np = m + n - 1;
        while(np1 >= 0 && np2 >= 0) {
            if (nums1.at(np1) > nums2.at(np2)) {
                nums1.at(np) = nums1.at(np1);
                np1--;
            } else {
                nums1.at(np) = nums2.at(np2);
                np2--;
            }
            np--;
        }
        while(np1 >= 0) {
            nums1.at(np) = nums1.at(np1);
            np1--;
            np--;
        }
        while(np2 >= 0) {
            nums1.at(np) = nums2.at(np2);
            np2--;
            np--;
        }
    }
};