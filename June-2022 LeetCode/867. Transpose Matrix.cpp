class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        vector<vector<int>> result ;
        
        int l= matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            vector<int> v;
            for (int j=0;j<l;j++)
            {
                v.push_back(matrix[j][i]);
            }
            result.push_back(v);
        }
        
        return result;
        }
};
