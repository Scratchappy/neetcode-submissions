class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dupe;
        for (int num : nums) {
            dupe.insert(num);
        }
        if (dupe.size() == nums.size()) {
            return false;
        } else {
            return true;
        }
    }
};