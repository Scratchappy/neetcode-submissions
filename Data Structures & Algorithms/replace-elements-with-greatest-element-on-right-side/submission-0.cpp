class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int j{0}; j < arr.size(); j++) {
            int highest{0};
            for (int i{j + 1}; i < arr.size(); i++) {
            if (arr[i] > highest) {
                highest = arr[i];
            }
        }
        arr[j] = highest;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};