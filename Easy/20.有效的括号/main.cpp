class Solution {
public:
    bool isValid(string s) {
      std::stack<char> vol;
      bool ret = true;
      for (int i = 0; i < s.length() && ret; ++i) {
          char c = s[i];
          if (c == '{') {
            vol.push('}');
          } else if (c == '(') {
            vol.push(')');
          } else if (c == '[') {
            vol.push(']');
          } else {
            if (vol.empty()) {
              ret = false;
            } else {
              char tmp = vol.top();
              vol.pop();
              if (tmp != c) {
                ret = false;
              }
            }
          }
      }
      if (!vol.empty()) {
          ret = false;
      }
      return ret;
    }
};