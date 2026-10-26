class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<int> ans;
        long res = 1;
        for(int i = 0;i<=n;i++){
            ans.push_back(res);
            res = res*(n-i);
            res = res/(i+1);
        }
        
        return ans;
    }
};