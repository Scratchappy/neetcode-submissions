class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_set<char> seen;
        unordered_set<char> seen1;
        int dupe{0};
        int dupe1{0};
        if (s.size() != t.size()) {
            return false;
        }
        for (char num : s) {
            seen.insert(num);
        }
        for (char nums : t) {
            seen1.insert(nums);
        }
        for (int i{0}; i < s.size(); i++) {
            for (int j{0}; j < s.size(); j++) {
                if (s[i] == s[j]) {
                    dupe++;
                }
            }
        }
        for (int i{0}; i < t.size(); i++) {
            for (int j{0}; j < t.size(); j++) {
                if (t[i] == t[j]) {
                    dupe1++;
                }
            }
        }
        if (seen == seen1 && dupe == dupe1) {
            return true;
        } else {
            return false;
        }
    }
};
