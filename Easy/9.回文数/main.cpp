class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) return true;
        int new_val = 0;
        int origin_x = x;
        int mod = 0;
        while (x > 0 && x >= new_val) {
            mod = x % 10;std::cout<<mod<<std::endl;
            x = x / 10;
            new_val = new_val * 10 + mod;
        }
        std::cout<<mod<<std::endl;
        if (mod == 0) {
            return false;
        } else {
            x = x * 10 + mod;
            return (new_val == x);
        }
    }
};