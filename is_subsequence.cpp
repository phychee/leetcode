class Solution {
public:
    bool isSubsequence(string s, string t) {
       int s_len = s.size(), t_len = t.size();
       int count1 = 0, count2 = 0;

       while (count1 < s_len && count2 < t_len) {
           if (s[count1] == t[count2]) {
               count1++;
               count2++;
           } else {
               count2++;
           }
       }

       if (count1 == s_len) {
           return true;
       }
       return false;
    }
};
