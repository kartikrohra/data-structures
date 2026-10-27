
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {
            vector<int> temp;
            long long res = 1;

            for (int col = 1; col <= row; col++) {
                temp.push_back(res);

                res = res * (row - col) / col;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};

