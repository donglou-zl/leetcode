class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 ==0)) {
            return false;
        }
        int reverse_val = 0;
        while (x > reverse_val) {
            reverse_val = reverse_val * 10 + x % 10;
            x = x / 10;
        }
        bool result = ((x == reverse_val) || (x == reverse_val / 10));
        return result;
    }
};