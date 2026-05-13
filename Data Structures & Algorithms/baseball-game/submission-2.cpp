class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score{0};
        int final{0};
        for (int i{0}; i < operations.size(); i++) {
            if (operations[i] == "C") {
                score.pop_back();
            } else if (operations[i] == "D") {
                score.push_back(score.back() * 2);
            } else if (operations[i] == "+") {
                score.push_back(score[(score.size() - 2)] + score[(score.size() - 1)]);
            } else {
            score.push_back(stoi(operations[i]));
}
        }
        for (int num : score) {
            final += num;
        }
        return final;
    }
};