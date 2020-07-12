class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x / 2 + 1;
        while(left < right) {
            int mid = left + (right - left) / 2 + 1;
            if (x / mid < mid) {
                right = mid - 1;
            } else {
                left = mid;
            }
        }
        return left;
    }
};