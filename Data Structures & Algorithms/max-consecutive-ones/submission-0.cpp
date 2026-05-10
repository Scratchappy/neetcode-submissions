class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_count{0};
        int max_count{0};
        for (int i{0}; i < nums.size(); i++) {
            if (nums.at(i) == 1) {
                current_count++;
            }
            if (nums.at(i) == 0) {
                current_count = 0;
            }
            if (current_count > max_count) {
                max_count = current_count;
            }
        }
        return max_count;
    }
};